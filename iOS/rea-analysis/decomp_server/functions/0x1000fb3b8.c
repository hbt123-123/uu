// rea decompile_all
// name: FUN_1000fb3b8
// address: 0x1000fb3b8
// body: available
// range: 0x1000fb3b8-0x1000fb62f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000fb3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  undefined1 auStack_f0 [16];
  ulong uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  ulong local_a8;
  long local_98;
  undefined8 local_80;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar4 = *(long *)(DAT_100b360a8 + 0x68);
  FUN_10019e3d8(auStack_b8,param_2,
                *(undefined8 *)(lVar4 + _TtC14UURemoteServer13HotkeyManager::hotKeys));
  if (local_98 != 0) {
    if ((long)local_a8 < 0) {
      FUN_100040bb4(auStack_b8,&DAT_100a76f28,&DAT_10080d6a0);
    }
    else {
      __s10Foundation4DateVACycfC(auStack_c0 + lVar3,lVar4);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar5 + 8))(auStack_c0 + lVar3,lVar2);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong *)((long)&uStack_e0 + lVar3) = local_a8;
      auStack_d8[lVar3] = 0;
      *(undefined8 *)((long)auStack_d0 + lVar3) = local_80;
      *(undefined8 *)((long)auStack_d0 + lVar3 + 8) = param_1;
      FUN_1003fb45c(param_3,auStack_f0 + lVar3,0xd000000000000092,0x8000000100882970,
                    0xd000000000000015,0x8000000100882a10,0x338,0);
      if (local_a8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000fb630);
        (*pcVar1)();
      }
      FUN_10011ce48(local_80);
      lVar3 = 0;
      _CGEventCreateKeyboardEvent(0,(uint)local_a8 & 0xffff,1);
      if (lVar3 != 0) {
        _CGEventSetFlags();
        _CGEventPost(0,lVar3);
        lVar3 = 0;
        _CGEventCreateKeyboardEvent(0,(uint)local_a8 & 0xffff,0);
        if (lVar3 != 0) {
          _CGEventSetFlags();
          _CGEventPost(0,lVar3);
          FUN_100040bb4(auStack_b8,&DAT_100a76f28,&DAT_10080d6a0);
          return 1;
        }
      }
      FUN_100040bb4(auStack_b8,&DAT_100a76f28,&DAT_10080d6a0);
    }
  }
  return 0;
}

