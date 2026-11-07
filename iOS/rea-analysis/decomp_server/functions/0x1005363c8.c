// rea decompile_all
// name: FUN_1005363c8
// address: 0x1005363c8
// body: available
// range: 0x1005363c8-0x10053649b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005363c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x20;
  
  puVar4 = param_1;
  FUN_100535660();
  lVar2 = unaff_x20[2];
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
    if (lVar2 == 0) goto LAB_1005363f8;
  }
  else if (lVar2 == unaff_x20[1] - lVar5) {
LAB_1005363f8:
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,puVar4,0,0);
    puVar4[1] = 0xd;
    *puVar4 = 0;
    goto LAB_100536480;
  }
  if ((uint)*(byte *)(lVar5 + lVar2) == ((uint)param_1 & 0xff)) {
    lVar1 = 0;
    if (lVar5 != 0) {
      lVar1 = unaff_x20[1] - lVar5;
    }
    if ((-1 < lVar2) && (lVar2 < lVar1)) {
      unaff_x20[2] = lVar2 + 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10053649c);
    (*pcVar3)();
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,puVar4,0,0);
  *puVar4 = 0;
  puVar4[1] = 0;
LAB_100536480:
  _swift_willThrow();
  return;
}

