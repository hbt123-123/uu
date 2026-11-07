// rea decompile_all
// name: FUN_10053317c
// address: 0x10053317c
// body: available
// range: 0x10053317c-0x10053320b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053317c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  FUN_100535660();
  lVar1 = unaff_x20[2];
  lVar2 = *unaff_x20;
  if (lVar2 == 0) {
    if (lVar1 == 0) goto LAB_1005331ac;
  }
  else if (lVar1 == unaff_x20[1] - lVar2) {
LAB_1005331ac:
    uVar3 = 0xd;
    goto LAB_1005331d0;
  }
  if ((*(char *)(lVar2 + lVar1) == '\"') && (FUN_100535e6c(), param_2 != 0)) {
    return;
  }
  uVar3 = 5;
LAB_1005331d0:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar3;
  _swift_willThrow();
  return;
}

