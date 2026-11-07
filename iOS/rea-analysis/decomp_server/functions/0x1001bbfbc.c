// rea decompile_all
// name: FUN_1001bbfbc
// address: 0x1001bbfbc
// body: available
// range: 0x1001bbfbc-0x1001bc193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001bbfbc(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long *local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar4 = _TtC14UURemoteServer16ClipboardHandler::ref;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_48,0,0);
  lVar4 = unaff_x20 + lVar4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
LAB_1001bc074:
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_1001be47c,0,0xd00000000000009f,0x8000000100892750,&DAT_d000000000000018,
                  0x800000010089ca60,0xd1,0);
  }
  else {
    plVar1 = (long *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::_peerState);
    plVar2 = plVar1;
    _swift_beginAccess(plVar1,auStack_60,0,0);
    if (plVar1[1] != 5) goto LAB_1001bc074;
    FUN_1000c815c();
    lVar3 = plVar2[2];
    _swift_release();
    if ((char)lVar3 != '\x01') goto LAB_1001bc074;
    FUN_1000c7b64();
    lVar3 = plVar2[0xc];
    _swift_release();
    if (((char)lVar3 != '\x01') ||
       ((*(byte *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::isSuspend) & 1) != 0))
    goto LAB_1001bc074;
    lVar4 = *(long *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::
                              ___lazy_storage___appDataHandler);
    if (*(char *)(lVar4 + 0x71) == '\x01') {
LAB_1001bc104:
      uVar5 = 1;
      goto LAB_1001bc0d4;
    }
    lVar3 = *(long *)(lVar4 + 0x68);
    if ((*(byte *)(lVar4 + 0x70) & 1) == 0) {
      if (lVar3 != 2) goto LAB_1001bc104;
    }
    else if ((lVar3 == 0) || (lVar3 == 1)) goto LAB_1001bc104;
    FUN_1003db8c4();
    (**(code **)(*plVar2 + 0x108))(&local_68);
    _swift_release(plVar2);
    uVar5 = (uint)plVar2;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0xd0))();
      _swift_release(local_68);
      goto LAB_1001bc0d4;
    }
  }
  uVar5 = 0;
LAB_1001bc0d4:
  return uVar5 & 1;
}

