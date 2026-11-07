// rea decompile_all
// name: FUN_100325090
// address: 0x100325090
// body: available
// range: 0x100325090-0x100325167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100325090(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 0xff;
  FUN_100277ad0(0xff);
  puVar2 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar3 = 0;
  (*param_4)(0,param_3,uVar1,puVar2);
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,lVar3);
  uVar1 = 0;
  __sScCMa(0,lVar3,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
  __sScC6resume9returningyxn_tF
            (&stack0xffffffffffffffc0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),uVar1);
  return;
}

