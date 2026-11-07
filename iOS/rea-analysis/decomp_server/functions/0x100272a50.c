// rea decompile_all
// name: FUN_100272a50
// address: 0x100272a50
// body: available
// range: 0x100272a50-0x100272b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100272a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  puVar2 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  (**(code **)(*(long *)*unaff_x20 + 0x2e0))(param_2,param_3,param_4,param_5,param_6);
  FUN_100263c94((long)unaff_x20 + (long)*(int *)(param_7 + 0x14),
                &stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  iVar1 = *(int *)(param_7 + 0x14);
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)param_1 + (long)iVar1,1,1,lVar3);
  *param_1 = param_2;
  FUN_10026b244(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),
                (long)param_1 + (long)iVar1);
  return;
}

