// rea decompile_all
// name: FUN_100118bbc
// address: 0x100118bbc
// body: available
// range: 0x100118bbc-0x100118f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

bool FUN_100118bbc(undefined8 param_1,byte param_2,undefined1 param_3)

{
  undefined2 uVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a0 [16];
  undefined1 local_90;
  byte local_8f;
  undefined1 local_8e;
  undefined2 local_72;
  ulong local_70;
  byte local_68;
  
  uVar4 = (uint)param_1;
  uVar5 = 0;
  _CGEventCreateKeyboardEvent(0,uVar4 & 0xffff,param_2 & 1);
  if (uVar5 == 0) goto LAB_100118ec4;
  uVar9 = param_1;
  FUN_10011ddac();
  uVar6 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar6);
  local_90 = (undefined1)uVar9;
  local_8f = (param_2 ^ 0xff) & 1;
  pcVar3 = thunk_FUN_10011cdbc;
  local_8e = param_3;
  FUN_1003fb48c(thunk_FUN_10011cdbc,auStack_a0,0xd00000000000009a,0x800000010088d2c0,
                0xd000000000000029,0x800000010088d360,0x16,0);
  FUN_100117740();
  uVar7 = 0;
  _objc_msgSend((ID)pcVar3,"lock");
  uVar9 = 0;
  uVar1 = (undefined2)param_1;
  local_72 = uVar1;
  if ((~param_2 & 1) == 0) {
    FUN_100118f04(param_1);
    if ((uVar7 & 1) == 0) {
      _CGEventSetFlags(uVar5,param_1);
    }
    if ((uVar4 - 0x80 & 0xffff) < 0xfffb) {
      if ((uVar4 & 0xffff) == 0xb3) {
        uVar7 = 0;
        _CGEventCreateKeyboardEvent(0,0x3f,0);
        if (uVar7 != 0) {
          _CGEventGetFlags();
          goto LAB_100118e3c;
        }
      }
    }
    else {
      uVar7 = uVar5;
      _CGEventGetFlags();
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        uVar7 = uVar5;
        _CGEventGetFlags(uVar5);
        uVar7 = uVar7 | 0x800000;
LAB_100118e3c:
        _CGEventSetFlags(uVar5,uVar7);
      }
    }
    uVar7 = uVar5;
    FUN_10011a4c0(uVar5,1);
    FUN_1001175b0();
    uVar10 = uVar5;
    _CGEventGetFlags();
    local_68 = 0;
    local_70 = uVar10;
    FUN_1003be2ac(&local_70,&local_72);
  }
  else {
    FUN_1001175b0(0);
    FUN_1003be1c4(&local_70,&local_72);
    _swift_release(uVar9);
    if (((local_68 & 1) == 0) && (local_70 != 0)) {
      uVar7 = local_70;
      FUN_10011c6b8();
      lVar2 = _TtC14UURemoteServer15InputController::___lazy_storage___keyboardPressedMap;
      uVar10 = *(ulong *)(uVar7 + 0x10);
      if (uVar10 != 0) {
        uVar11 = 0;
        do {
          if (*(ulong *)(uVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100118efc);
            (*pcVar3)();
          }
          uVar8 = *(ulong *)(uVar7 + uVar11 * 8 + 0x20);
          if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100118f00);
            (*pcVar3)();
          }
          if (uVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100118f04);
            (*pcVar3)();
          }
          uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
          local_72 = (undefined2)uVar8;
          _swift_retain(uVar9);
          FUN_1003be1c4(&local_70,&local_72);
          _swift_release(uVar9);
          if (local_68 != 1) {
            _swift_bridgeObjectRelease(uVar7);
            goto LAB_100118df0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      _swift_bridgeObjectRelease(uVar7);
    }
    _CGEventSetFlags(uVar5,0);
LAB_100118df0:
    FUN_10011a4c0(uVar5,0);
    uVar7 = *(ulong *)(unaff_x20 +
                      _TtC14UURemoteServer15InputController::___lazy_storage___keyboardPressedMap);
    local_72 = uVar1;
    _swift_retain(uVar7);
    FUN_1003bdab0(&local_70,&local_72);
  }
  _swift_release(uVar7);
  _CGEventPost(0,uVar5);
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___lock),
                "unlock");
LAB_100118ec4:
  return uVar5 != 0;
}

