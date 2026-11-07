// rea decompile_all
// name: FUN_1001c11b4
// address: 0x1001c11b4
// body: available
// range: 0x1001c11b4-0x1001c12df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001c11b4(double param_1,undefined8 param_2,long param_3)

{
  double *pdVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  double dVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_3 != 0) &&
     (pdVar1 = (double *)(param_3 + _TtC14UURemoteServer12InputHandler::lastHeartTime),
     ((ulong)pdVar1[1] & 1) == 0)) {
    dVar4 = *pdVar1;
    __s10Foundation4DateVACycfC(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar3 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (0.2 <= ABS(dVar4 - param_1)) {
      *pdVar1 = 0.0;
      *(undefined1 *)(pdVar1 + 1) = 1;
      lVar2 = _TtC14UURemoteServer12InputHandler::checkHeartTimer;
      if (*(ID *)(param_3 + _TtC14UURemoteServer12InputHandler::checkHeartTimer) != 0) {
        _objc_msgSend(*(ID *)(param_3 + _TtC14UURemoteServer12InputHandler::checkHeartTimer),
                      "invalidate");
        *(undefined8 *)(param_3 + lVar2) = 0;
      }
      FUN_1001c04a8(0);
      FUN_1001c0c80();
    }
  }
  return;
}

