// rea decompile_all
// name: FUN_10027b4b4
// address: 0x10027b4b4
// body: available
// range: 0x10027b4b4-0x10027b873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10027b4b4(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  undefined1 local_80 [8];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  ulong local_38;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 5);
  if (bVar3 < 5) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        local_40 = (undefined1 *)0x0;
        local_38 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x49);
        __sSS6appendyySSF(&DAT_d000000000000033,0x80000001008a9620);
        __sSS6appendyySSF(lVar1,lVar2);
        __sSS6appendyySSF(0xd000000000000014,0x80000001008a9660);
      }
      else {
        local_38 = 0x80000001008a9570;
        local_40 = (undefined1 *)0xd000000000000025;
      }
      goto LAB_10027b830;
    }
    if (bVar3 == 2) {
      local_38 = 0x80000001008a9520;
      local_40 = (undefined1 *)0xd00000000000004a;
      goto LAB_10027b830;
    }
    if (bVar3 == 3) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x29);
      _swift_bridgeObjectRelease(local_38);
      local_40 = (undefined1 *)0xd000000000000027;
      local_38 = 0x80000001008a94b0;
      if (lVar1 == 0) {
        uVar5 = 0xe400000000000000;
      }
      else {
        _swift_getErrorValue(lVar1,auStack_68,local_80);
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_78,local_70);
        uVar5 = local_70;
      }
      goto LAB_10027b820;
    }
    local_40 = (undefined1 *)0x0;
    local_38 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x26);
    _swift_bridgeObjectRelease(local_38);
    pcVar4 = "Default evaluation failed for host ";
LAB_10027b72c:
    local_38 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    local_40 = (undefined1 *)0xd000000000000023;
  }
  else {
    if (7 < bVar3) {
      if (bVar3 != 8) {
        if (bVar3 != 9) {
          if (((lVar2 == 0 && lVar1 == 0) && (unaff_x20[4] == 0 && unaff_x20[3] == 0)) &&
              unaff_x20[2] == 0) {
            local_38 = 0x80000001008a95e0;
            local_40 = (undefined1 *)0xd000000000000036;
          }
          else if ((lVar1 == 1) &&
                  ((unaff_x20[4] == 0 && lVar2 == 0) && (unaff_x20[3] == 0 && unaff_x20[2] == 0))) {
            local_38 = 0x80000001008a95a0;
            local_40 = (undefined1 *)0xd000000000000035;
          }
          else {
            local_38 = 0x80000001008a94e0;
            local_40 = &DAT_d000000000000030;
          }
          goto LAB_10027b830;
        }
        local_40 = (undefined1 *)0x0;
        local_38 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2d);
        _swift_bridgeObjectRelease(local_38);
        local_40 = (undefined1 *)0xd00000000000002b;
        local_38 = 0x80000001008a9390;
        _swift_getErrorValue(lVar1,auStack_48,local_60);
        __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_58,local_50);
        uVar5 = local_50;
LAB_10027b820:
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar5);
        goto LAB_10027b830;
      }
      local_40 = (undefined1 *)0x0;
      local_38 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x26);
      _swift_bridgeObjectRelease(local_38);
      pcVar4 = "Public key pinning failed for host ";
      goto LAB_10027b72c;
    }
    if (bVar3 == 5) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x23);
      _swift_bridgeObjectRelease(local_38);
      local_38 = 0x80000001008a9450;
      local_40 = (undefined1 *)0xd000000000000020;
    }
    else if (bVar3 == 6) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x24);
      _swift_bridgeObjectRelease(local_38);
      local_38 = 0x80000001008a9420;
      local_40 = (undefined1 *)0xd000000000000021;
    }
    else {
      local_40 = (undefined1 *)0x0;
      local_38 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x27);
      _swift_bridgeObjectRelease(local_38);
      local_38 = 0x80000001008a93f0;
      local_40 = (undefined1 *)0xd000000000000024;
    }
  }
  __sSS6appendyySSF(lVar1,lVar2);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
LAB_10027b830:
  auVar6._8_8_ = local_38;
  auVar6._0_8_ = local_40;
  return auVar6;
}

