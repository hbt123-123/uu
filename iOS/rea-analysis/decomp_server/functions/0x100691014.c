// rea decompile_all
// name: FUN_100691014
// address: 0x100691014
// body: available
// range: 0x100691014-0x10069143f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100691014(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined *unaff_x21;
  long lVar13;
  ID *pIVar14;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 *local_200;
  undefined8 *puStack_1f8;
  ID local_1f0;
  ID IStack_1e8;
  ID local_1e0;
  ID local_1d8;
  ID local_1d0;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  char cStack_1c0;
  char cStack_1bf;
  char cStack_1be;
  undefined1 *local_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  ID aIStack_148 [6];
  char acStack_118 [8];
  ID local_110 [7];
  ID local_d8;
  ID IStack_d0;
  ID local_c8;
  ID IStack_c0;
  ID local_b8;
  ID IStack_b0;
  char local_a8;
  char local_a7;
  char local_a6;
  ID local_a0;
  ID IStack_98;
  ID IStack_90;
  ID IStack_88;
  ID local_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  
  puVar7 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  lVar13 = *(long *)(unaff_x20 + 0x20);
  FUN_10007f314(param_2,&local_1f0,&DAT_100ab9ed0,&DAT_10084d550);
  if (local_1d8 == 0) {
    FUN_100040bb4(&local_1f0,&DAT_100ab9ed0,&DAT_10084d550);
    *param_1 = 0x6c6c756e;
    param_1[1] = 0xe400000000000000;
  }
  else {
    FUN_10007f3d4(&local_1f0,auStack_168);
    FUN_10003e8bc(auStack_168,auStack_188);
    FUN_10003e8bc(auStack_188,auStack_1a8);
    ppuVar3 = &local_1b8;
    _swift_dynamicCast(ppuVar3,auStack_1a8,PTR___sypN_100995e88 + 8,
                       PTR___s10Foundation4DataVN_1009961e8,0);
    if ((int)ppuVar3 == 0) {
      FUN_10003e8bc(auStack_188,&local_1f0);
      FUN_10068e2dc(&local_d8,&local_1f0);
      FUN_10003f094(auStack_188);
      cVar1 = local_a7;
    }
    else {
      FUN_100008184(local_1b8,lStack_1b0);
      FUN_10068e3b8(aIStack_148,local_1b8,lStack_1b0,0);
      if (unaff_x21 == (undefined *)0x0) {
        FUN_100006cdc(local_1b8,lStack_1b0);
        FUN_10003f094(auStack_188);
        FUN_100006cdc(local_1b8,lStack_1b0);
        pIVar14 = aIStack_148;
      }
      else {
        FUN_100006cdc(local_1b8,lStack_1b0);
        puVar4 = &_OBJC_CLASS___NSNull;
        _objc_allocWithZone();
        IVar5 = _objc_msgSend((ID)puVar4,"init");
        uVar6 = 0;
        FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
        pIVar14 = (ID *)(acStack_118 + 8);
        local_1f0 = IVar5;
        local_1d8 = uVar6;
        FUN_10068e2dc(acStack_118 + 8,&local_1f0);
        _swift_errorRelease();
        FUN_100006cdc(local_1b8,lStack_1b0);
        FUN_10003f094(auStack_188);
        unaff_x21 = (undefined *)0x0;
      }
      local_a6 = *(char *)((long)pIVar14 + 0x32);
      local_a8 = (char)pIVar14[6];
      local_b8 = pIVar14[4];
      IStack_b0 = pIVar14[5];
      local_c8 = pIVar14[2];
      IStack_c0 = pIVar14[3];
      local_d8 = *pIVar14;
      IStack_d0 = pIVar14[1];
      cVar1 = *(char *)((long)pIVar14 + 0x31);
    }
    uStack_1c8 = (undefined7)IStack_b0;
    uStack_1c1 = (undefined1)(IStack_b0 >> 0x38);
    uStack_71 = CONCAT13(local_a6,CONCAT12(cVar1,CONCAT11(local_a8,uStack_1c1)));
    local_1f0 = local_d8;
    IStack_1e8 = IStack_d0;
    local_1e0 = local_c8;
    local_1d8 = IStack_c0;
    local_1d0 = local_b8;
    cStack_1c0 = local_a8;
    cStack_1bf = cVar1;
    cStack_1be = local_a6;
    local_a0 = local_d8;
    IStack_98 = IStack_d0;
    IStack_90 = local_c8;
    IStack_88 = IStack_c0;
    local_80 = local_b8;
    uStack_78 = uStack_1c8;
    FUN_10003f094(auStack_1a8);
    if (SBORROW8(lVar13,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100691440);
      (*pcVar2)();
    }
    FUN_1006865b8(puVar7,lVar10,lVar13 + -1);
    if (unaff_x21 == (undefined *)0x0) {
      if (lVar10 != 0) {
        if (cVar1 == '\x01') {
          local_1b8 = (undefined1 *)0x22;
          lStack_1b0 = -0x1f00000000000000;
          local_210 = 0x5c;
          uStack_208 = 0xe100000000000000;
          local_220 = 0x5c5c;
          uStack_218 = 0xe200000000000000;
          local_200 = (undefined8 *)puVar7;
          puStack_1f8 = (undefined8 *)lVar10;
          FUN_10068e4f8();
          puVar4 = PTR___sSSN_1009957f8;
          puVar8 = &local_210;
          puVar11 = &local_220;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (puVar8,puVar11,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,
                     PTR___sSSN_1009957f8,puVar7,puVar7,puVar7);
          _swift_bridgeObjectRelease(lVar10);
          local_210 = 0x22;
          uStack_208 = 0xe100000000000000;
          local_220 = 0x225c;
          uStack_218 = 0xe200000000000000;
          puVar9 = &local_210;
          puVar12 = &local_220;
          local_200 = puVar8;
          puStack_1f8 = puVar11;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (puVar9,puVar12,0,0,0,1,puVar4,puVar4,puVar4,puVar7,puVar7,puVar7);
          _swift_bridgeObjectRelease(puVar11);
          __sSS6appendyySSF(puVar9,puVar12);
          _swift_bridgeObjectRelease(puVar12);
          __sSS6appendyySSF(0x22,0xe100000000000000);
          FUN_10068e548(&local_1f0);
          lVar10 = lStack_1b0;
          puVar7 = local_1b8;
          FUN_10003f094(auStack_168);
        }
        else {
          FUN_10003f094(auStack_168);
          FUN_10068e548(&local_1f0);
        }
        *param_1 = puVar7;
        param_1[1] = lVar10;
        return;
      }
      FUN_10068f620();
      unaff_x21 = &DAT_1009e6258;
      _swift_allocError(&DAT_1009e6258,puVar7,0,0);
      *puVar7 = 5;
      _swift_willThrow();
      FUN_10068e548(&local_1f0);
      FUN_10003f094(auStack_168);
    }
    else {
      FUN_10003f094(auStack_168);
      FUN_10068e548(&local_1f0);
    }
    *param_3 = unaff_x21;
  }
  return;
}

