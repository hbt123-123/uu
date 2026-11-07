// rea decompile_all
// name: FUN_1000fc10c
// address: 0x1000fc10c
// body: available
// range: 0x1000fc10c-0x1000fc807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000fc244) */

undefined8
FUN_1000fc10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint5 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar14;
  ID IVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_220 [16];
  ulong uStack_210;
  undefined1 auStack_208 [8];
  undefined8 auStack_200 [2];
  long local_1f0;
  uint local_1e4;
  long local_1e0;
  long local_1d8;
  undefined1 auStack_188 [24];
  long local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [56];
  undefined1 auStack_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  char local_d7;
  undefined8 local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_98;
  
  lVar6 = 0;
  __s10Foundation4DateVMa();
  local_1e0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1e0 + 0x40));
  lVar18 = (long)&local_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar17 = *(long *)(lVar7 + -8);
  lVar16 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = param_3;
  local_c8 = param_4;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar19);
  FUN_10009ff0c();
  puVar10 = PTR___sSSN_1009957f8;
  uVar13 = 0;
  lVar8 = lVar19;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar19,0,PTR___sSSN_1009957f8,lVar16);
  (**(code **)(lVar17 + 8))(lVar19,lVar7);
  if (0xe < uVar13 >> 0x3c) {
    return 0;
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_100008184(lVar8,uVar13);
  local_1d8 = lVar8;
  FUN_10067eda8(auStack_140,lVar8,uVar13,0);
  puVar9 = &DAT_100a76d38;
  FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
  _swift_initStackObject();
  uVar20 = 1;
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  *(undefined **)(puVar9 + 0x38) = puVar10;
  *(undefined ***)(puVar9 + 0x40) = &PTR_PTR_1009e61c8;
  *(undefined8 *)(puVar9 + 0x20) = 0x6e6f69746361;
  *(undefined8 *)(puVar9 + 0x28) = 0xe600000000000000;
  thunk_FUN_10068573c(auStack_108);
  _swift_setDeallocating(puVar9);
  uVar14 = *(undefined8 *)(puVar9 + 0x10);
  puVar10 = &DAT_100a76d40;
  FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
  _swift_arrayDestroy(puVar9 + 0x20,uVar14,puVar10);
  if (local_d7 == '\x01') {
    _swift_bridgeObjectRetain(uStack_f0);
    FUN_1000abcec(auStack_108);
    FUN_1000b0438(local_f8,uStack_f0);
    uVar1 = 2;
    if (((uint)local_f8 & 0xff) != 0xd) {
      uVar1 = (uint)local_f8;
    }
    FUN_1000aea84(&local_160,auStack_140,uVar1);
    FUN_1000abcec(auStack_140);
  }
  else {
    FUN_1000abcec(auStack_108);
    FUN_1000abcec(auStack_140);
    uVar20 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
  }
  lVar16 = local_1d8;
  FUN_10007f314(&local_160,auStack_188,&DAT_100a766e0,&DAT_10080bdb0);
  if (local_170 == 0) {
    FUN_100040bb4(&local_160,&DAT_100a766e0,&DAT_10080bdb0);
    FUN_100006cc8(lVar16,uVar13);
    FUN_100040bb4(auStack_188,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    puVar11 = &local_d0;
    _swift_dynamicCast(puVar11,auStack_188,PTR___sypN_100995e88 + 8,&DAT_10099ac50,6);
    uVar4 = local_b0;
    uVar3 = local_c0;
    uVar14 = local_d0;
    if (((ulong)puVar11 & 1) != 0) {
      local_1e4 = (uint)(byte)local_c8;
      uVar2 = CONCAT14(local_b0,local_b4);
      uVar12 = 0;
      FUN_1003a9990();
      FUN_1003a8848();
      if ((uVar12 & 1) == 0) {
        FUN_100040bb4(&local_160,&DAT_100a766e0,&DAT_10080bdb0);
        FUN_100006cc8(local_1d8,uVar13);
        return 2;
      }
      local_1f0 = DAT_100b360a8;
      IVar15 = *(ID *)(DAT_100b360a8 + 0x80);
      _swift_retain(IVar15);
      local_d0 = CONCAT71(local_d0._1_7_,uVar4);
      FUN_1000333e0(uVar14,local_1e4,uVar3,local_b8,(ulong)uVar2);
      _swift_release();
      FUN_1000fbf6c(uVar20,param_2);
      if (IVar15 != 0) {
        IVar15 = _objc_msgSend(IVar15,"activateWithOptions:",2);
        if ((int)IVar15 == 0) {
          FUN_100040bb4(&local_160,&DAT_100a766e0,&DAT_10080bdb0);
          FUN_100006cc8(local_1d8,uVar13);
          return 4;
        }
        lVar16 = *(long *)(local_1f0 + 0x68);
        FUN_10019e3d8(&local_d0,0x30,
                      *(undefined8 *)(lVar16 + _TtC14UURemoteServer13HotkeyManager::hotKeys));
        if (CONCAT71(uStack_af,local_b0) != 0) {
          if (-1 < (long)local_c0) {
            __s10Foundation4DateVACycfC(lVar18,lVar16);
            __s10Foundation4DateV21timeIntervalSince1970Sdvg();
            (**(code **)(local_1e0 + 8))(lVar18,lVar6);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(ulong *)(lVar19 + -0x20) = local_c0;
            *(undefined1 *)(lVar19 + -0x18) = 0;
            *(undefined8 *)(lVar19 + -0x10) = local_98;
            *(undefined8 *)(lVar19 + -8) = uVar20;
            FUN_1003fb45c(thunk_FUN_1000b659c,lVar19 + -0x30,0xd000000000000092,0x8000000100882970,
                          0xd000000000000015,0x8000000100882a10,0x338,0);
            if (local_c0 >> 0x10 == 0) {
              FUN_10011ce48(local_98);
              lVar16 = 0;
              _CGEventCreateKeyboardEvent(0,(uint)local_c0 & 0xffff,1);
              if (lVar16 != 0) {
                _CGEventSetFlags();
                _CGEventPost(0,lVar16);
                lVar16 = 0;
                _CGEventCreateKeyboardEvent(0,(uint)local_c0 & 0xffff,0);
                if (lVar16 != 0) {
                  _CGEventSetFlags();
                  _CGEventPost(0,lVar16);
                }
              }
              FUN_100040bb4(&local_d0,&DAT_100a76f28,&DAT_10080d6a0);
              FUN_100006cc8(local_1d8,uVar13);
              FUN_100040bb4(&local_160,&DAT_100a766e0,&DAT_10080bdb0);
              return 4;
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000fc808);
            (*pcVar5)();
          }
          FUN_100040bb4(&local_d0,&DAT_100a76f28,&DAT_10080d6a0);
        }
        FUN_100006cc8(local_1d8,uVar13);
        FUN_100040bb4(&local_160,&DAT_100a766e0,&DAT_10080bdb0);
        return 4;
      }
      FUN_100040bb4(&local_160,&DAT_100a766e0,&DAT_10080bdb0);
      FUN_100006cc8(local_1d8,uVar13);
      return 3;
    }
    FUN_100040bb4(&local_160,&DAT_100a766e0,&DAT_10080bdb0);
    FUN_100006cc8(lVar16,uVar13);
  }
  return 1;
}

