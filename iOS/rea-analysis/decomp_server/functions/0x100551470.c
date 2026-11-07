// rea decompile_all
// name: FUN_100551470
// address: 0x100551470
// body: available
// range: 0x100551470-0x10055156b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100551470(undefined1 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  puVar2 = param_1;
  FUN_100560bb8();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_100560bb8();
    FUN_100551198(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
    if (unaff_x21 == 0) {
      (**(code **)(lVar4 + 8))(param_1,param_2);
      (**(code **)(lVar4 + 0x20))
                (param_1,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2);
    }
  }
  return;
}

