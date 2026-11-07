// rea decompile_all
// name: FUN_10055134c
// address: 0x10055134c
// body: available
// range: 0x10055134c-0x10055146f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055134c(undefined1 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
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
    FUN_100551198(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
    if (unaff_x21 == 0) {
      lVar3 = 0;
      __sSqMa(0,param_2);
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
      (**(code **)(lVar5 + 0x20))
                (param_1,&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2);
      (**(code **)(lVar5 + 0x38))(param_1,0,1,param_2);
    }
  }
  return;
}

