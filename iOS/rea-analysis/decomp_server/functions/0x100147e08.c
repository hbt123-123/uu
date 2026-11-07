// rea decompile_all
// name: FUN_100147e08
// address: 0x100147e08
// body: available
// range: 0x100147e08-0x10014808b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100147e08(byte param_1,byte param_2)

{
  long lVar1;
  bool bVar2;
  ID IVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_70 [16];
  byte local_60;
  byte local_5f;
  long local_58;
  
  FUN_100401b14(0);
  local_60 = param_1;
  local_5f = param_2;
  FUN_1003fb45c(FUN_10014961c,auStack_70,0xd0000000000000ab,0x8000000100891c00,&DAT_d000000000000028
                ,0x8000000100891ec0,0x7f,0);
  if ((param_2 & 1) == 0) {
LAB_100147ee4:
    if ((param_1 & 1) != 0) {
      plVar5 = *(long **)(unaff_x20 + 0x50);
      pcVar7 = *(code **)(*plVar5 + 0x88);
      _swift_retain(plVar5);
      (*pcVar7)(&local_58);
      _swift_release(plVar5);
      if (SBORROW8(local_58,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100148084);
        (*pcVar7)();
      }
      if (-1 < local_58 + -1) {
        plVar6 = *(long **)(unaff_x20 + 0x20);
        pcVar7 = *(code **)(*plVar6 + 0xb8);
        plVar5 = plVar6;
        _swift_retain();
        (*pcVar7)();
        _swift_release(plVar6);
        if (((ulong)plVar5 & 1) == 0) {
          plVar5 = *(long **)(unaff_x20 + 0x50);
          pcVar7 = *(code **)(*plVar5 + 0x88);
          _swift_retain(plVar5);
          (*pcVar7)(&local_58);
          bVar2 = SBORROW8(local_58,1);
          local_58 = local_58 + -1;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10014808c);
            (*pcVar7)();
          }
          (**(code **)(*plVar5 + 0x90))(&local_58);
          _swift_release(plVar5);
          pcVar7 = FUN_100149630;
          goto LAB_100148050;
        }
      }
    }
    FUN_1003fb45c(FUN_100149628);
    uVar4 = 0;
  }
  else {
    plVar5 = *(long **)(unaff_x20 + 0x50);
    pcVar7 = *(code **)(*plVar5 + 0x88);
    _swift_retain(plVar5);
    (*pcVar7)(&local_58);
    _swift_release(plVar5);
    lVar1 = local_58 + 1;
    if (SCARRY8(local_58,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100148080);
      (*pcVar7)();
    }
    IVar3 = _objc_msgSend(*(ID *)(unaff_x20 + 0x18),"maxConcurrentOperationCount");
    if ((long)IVar3 < lVar1) goto LAB_100147ee4;
    plVar5 = *(long **)(unaff_x20 + 0x50);
    pcVar7 = *(code **)(*plVar5 + 0x88);
    _swift_retain(plVar5);
    (*pcVar7)(&local_58);
    bVar2 = SCARRY8(local_58,1);
    local_58 = local_58 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100148088);
      (*pcVar7)();
    }
    (**(code **)(*plVar5 + 0x90))(&local_58);
    _swift_release(plVar5);
    pcVar7 = FUN_100149638;
LAB_100148050:
    FUN_1003fb45c(pcVar7);
    uVar4 = 1;
  }
  return uVar4;
}

