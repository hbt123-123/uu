// rea decompile_all
// name: FUN_10067d954
// address: 0x10067d954
// body: available
// range: 0x10067d954-0x10067db07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067d954(long param_1,undefined1 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 1;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  if ((*(long *)(param_1 + 0x10) == 0x20) && (*(long *)(param_2 + 0x10) == 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x18) = 0x20;
    puVar2 = param_2;
    thunk_FUN_100629d98(param_2,param_2 + 0x20,0,0x21);
    lVar3 = param_1;
    FUN_10067e234(param_1,puVar2);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(param_1);
    if (*(ulong *)(param_2 + 0x10) < 0x18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10067db08);
      (*pcVar1)();
    }
    puVar2 = param_2;
    thunk_FUN_100629d98(param_2,param_2 + 0x20,0x10,0x31);
    _swift_bridgeObjectRelease(param_2);
    puVar4 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_initStaticObject();
    FUN_100628ae0(puVar2);
    uVar5 = 0;
    FUN_10066326c(0);
    _swift_allocObject();
    FUN_1006619e0(lVar3,puVar4,param_3,uVar5);
    if (unaff_x21 == 0) {
      *(long *)(unaff_x20 + 0x10) = lVar3;
      return;
    }
  }
  else {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease();
    FUN_10067db08();
    _swift_allocError(&DAT_1009e60b0,param_2,0,0);
    *param_2 = 0;
    _swift_willThrow();
  }
  _swift_deallocPartialClassInstance();
  return;
}

