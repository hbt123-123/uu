// rea decompile_all
// name: FUN_100691440
// address: 0x100691440
// body: available
// range: 0x100691440-0x1006919b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100691440(ID *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  ID *pIVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long unaff_x20;
  undefined *unaff_x21;
  ID IVar18;
  long lVar19;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 *local_238;
  undefined8 *puStack_230;
  ID local_228;
  ID IStack_220;
  ID local_218;
  ID IStack_210;
  ID local_208;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  char cStack_1f8;
  char cStack_1f7;
  char cStack_1f6;
  ID local_1f0;
  ID IStack_1e8;
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  ID local_180;
  undefined8 uStack_178;
  ID IStack_170;
  ID IStack_168;
  ID aIStack_158 [6];
  char acStack_128 [8];
  ID local_120 [7];
  ID local_e8;
  ID IStack_e0;
  ID local_d8;
  ID IStack_d0;
  ID local_c8;
  ID IStack_c0;
  char local_b8;
  char local_b7;
  char local_b6;
  ID local_b0;
  ID IStack_a8;
  ID IStack_a0;
  ID IStack_98;
  ID local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  
  lVar19 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *param_2;
  uVar2 = param_2[1];
  if (*(long *)(lVar19 + 0x10) != 0) {
    puVar10 = *(undefined1 **)(unaff_x20 + 0x18);
    lVar14 = *(long *)(unaff_x20 + 0x20);
    lVar17 = *(long *)(unaff_x20 + 0x28);
    _swift_bridgeObjectRetain(lVar19);
    lVar5 = lVar1;
    uVar13 = uVar2;
    FUN_1001a2c70(lVar1);
    if ((uVar13 & 1) != 0) {
      FUN_10007f314(*(long *)(lVar19 + 0x38) + lVar5 * 0x20,&local_228,&DAT_100ab9ed0,&DAT_10084d550
                   );
      _swift_bridgeObjectRelease(lVar19);
      uStack_178 = IStack_220;
      local_180 = local_228;
      IStack_168 = IStack_210;
      IStack_170 = local_218;
      FUN_10007f314(&local_180,&local_228,&DAT_100ab9ed0,&DAT_10084d550);
      if (IStack_210 == 0) {
        FUN_100040bb4(&local_228,&DAT_100ab9ed0,&DAT_10084d550);
        local_228 = 0x22;
        IStack_220 = 0xe100000000000000;
        __sSS6appendyySSF(lVar1,uVar2);
        __sSS6appendyySSF(0x6c6c756e203a22,0xe700000000000000);
        IVar8 = local_228;
        IVar18 = IStack_220;
LAB_1006919a8:
        FUN_100040bb4(&local_180,&DAT_100ab9ed0,&DAT_10084d550);
        *param_1 = IVar8;
        param_1[1] = IVar18;
        return;
      }
      FUN_10007f3d4(&local_228,auStack_1a0);
      FUN_10003e8bc(auStack_1a0,auStack_1c0);
      FUN_10003e8bc(auStack_1c0,auStack_1e0);
      pIVar6 = &local_1f0;
      _swift_dynamicCast(pIVar6,auStack_1e0,PTR___sypN_100995e88 + 8,
                         PTR___s10Foundation4DataVN_1009961e8,0);
      if ((int)pIVar6 == 0) {
        FUN_10003e8bc(auStack_1c0,&local_228);
        FUN_10068e2dc(&local_e8,&local_228);
        FUN_10003f094(auStack_1c0);
        cVar3 = local_b7;
      }
      else {
        FUN_100008184(local_1f0,IStack_1e8);
        FUN_10068e3b8(aIStack_158,local_1f0,IStack_1e8,0);
        if (unaff_x21 == (undefined *)0x0) {
          FUN_100006cdc(local_1f0,IStack_1e8);
          FUN_10003f094(auStack_1c0);
          FUN_100006cdc(local_1f0,IStack_1e8);
          pIVar6 = aIStack_158;
        }
        else {
          FUN_100006cdc(local_1f0,IStack_1e8);
          puVar7 = &_OBJC_CLASS___NSNull;
          _objc_allocWithZone();
          IVar8 = _objc_msgSend((ID)puVar7,"init");
          uVar9 = 0;
          FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
          pIVar6 = (ID *)(acStack_128 + 8);
          local_228 = IVar8;
          IStack_210 = uVar9;
          FUN_10068e2dc(acStack_128 + 8,&local_228);
          _swift_errorRelease();
          FUN_100006cdc(local_1f0,IStack_1e8);
          FUN_10003f094(auStack_1c0);
          unaff_x21 = (undefined *)0x0;
        }
        local_b6 = *(char *)((long)pIVar6 + 0x32);
        local_b8 = (char)pIVar6[6];
        local_c8 = pIVar6[4];
        IStack_c0 = pIVar6[5];
        local_d8 = pIVar6[2];
        IStack_d0 = pIVar6[3];
        local_e8 = *pIVar6;
        IStack_e0 = pIVar6[1];
        cVar3 = *(char *)((long)pIVar6 + 0x31);
      }
      uStack_200 = (undefined7)IStack_c0;
      uStack_1f9 = (undefined1)(IStack_c0 >> 0x38);
      uStack_81 = CONCAT13(local_b6,CONCAT12(cVar3,CONCAT11(local_b8,uStack_1f9)));
      local_228 = local_e8;
      IStack_220 = IStack_e0;
      local_218 = local_d8;
      IStack_210 = IStack_d0;
      local_208 = local_c8;
      cStack_1f8 = local_b8;
      cStack_1f7 = cVar3;
      cStack_1f6 = local_b6;
      local_b0 = local_e8;
      IStack_a8 = IStack_e0;
      IStack_a0 = local_d8;
      IStack_98 = IStack_d0;
      local_90 = local_c8;
      uStack_88 = uStack_200;
      FUN_10003f094(auStack_1e0);
      if (SBORROW8(lVar17,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006919b8);
        (*pcVar4)();
      }
      FUN_1006865b8(puVar10,lVar14,lVar17 + -1);
      if (unaff_x21 == (undefined *)0x0) {
        if (lVar14 != 0) {
          if (cVar3 == '\x01') {
            local_1f0 = 0x22;
            IStack_1e8 = 0xe100000000000000;
            __sSS6appendyySSF(lVar1,uVar2);
            uVar9 = 0x22203a22;
            __sSS6appendyySSF(0x22203a22,0xe400000000000000);
            local_248 = 0x5c;
            uStack_240 = 0xe100000000000000;
            local_258 = 0x5c5c;
            uStack_250 = 0xe200000000000000;
            local_238 = (undefined8 *)puVar10;
            puStack_230 = (undefined8 *)lVar14;
            FUN_10068e4f8();
            puVar7 = PTR___sSSN_1009957f8;
            puVar11 = &local_248;
            puVar15 = &local_258;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (puVar11,puVar15,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,
                       PTR___sSSN_1009957f8,uVar9,uVar9,uVar9);
            _swift_bridgeObjectRelease(lVar14);
            local_248 = 0x22;
            uStack_240 = 0xe100000000000000;
            local_258 = 0x225c;
            uStack_250 = 0xe200000000000000;
            puVar12 = &local_248;
            puVar16 = &local_258;
            local_238 = puVar11;
            puStack_230 = puVar15;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (puVar12,puVar16,0,0,0,1,puVar7,puVar7,puVar7,uVar9,uVar9,uVar9);
            _swift_bridgeObjectRelease(puVar15);
            __sSS6appendyySSF(puVar12,puVar16);
            _swift_bridgeObjectRelease(puVar16);
            __sSS6appendyySSF(0x22,0xe100000000000000);
          }
          else {
            local_1f0 = 0x22;
            IStack_1e8 = 0xe100000000000000;
            __sSS6appendyySSF(lVar1,uVar2);
            __sSS6appendyySSF(0x203a22,0xe300000000000000);
            __sSS6appendyySSF(puVar10,lVar14);
            _swift_bridgeObjectRelease(lVar14);
          }
          FUN_10068e548(&local_228);
          IVar18 = IStack_1e8;
          IVar8 = local_1f0;
          FUN_10003f094(auStack_1a0);
          goto LAB_1006919a8;
        }
        FUN_10068f620();
        unaff_x21 = &DAT_1009e6258;
        _swift_allocError(&DAT_1009e6258,puVar10,0,0);
        *puVar10 = 2;
        _swift_willThrow();
      }
      FUN_10068e548(&local_228);
      FUN_10003f094(auStack_1a0);
      FUN_100040bb4(&local_180,&DAT_100ab9ed0,&DAT_10084d550);
      *param_3 = unaff_x21;
      return;
    }
    _swift_bridgeObjectRelease(lVar19);
  }
  local_228 = 0x22;
  IStack_220 = 0xe100000000000000;
  __sSS6appendyySSF(lVar1,uVar2);
  __sSS6appendyySSF(0x6c6c756e203a22,0xe700000000000000);
  *param_1 = local_228;
  param_1[1] = IStack_220;
  return;
}

