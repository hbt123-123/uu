// rea decompile_all
// name: FUN_10070690c
// address: 0x10070690c
// body: available
// range: 0x10070690c-0x100706dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100706ab0) */
/* WARNING: Removing unreachable block (ram,0x000100706b7c) */

undefined1  [16] FUN_10070690c(ulong param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  uint uVar15;
  long extraout_x8;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 auStack_110 [4];
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [2];
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 local_7a;
  undefined1 local_79;
  ulong local_78;
  ulong uStack_70;
  undefined2 local_64;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = (long)&local_d0 + lVar3;
  uVar11 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar11 = param_2 >> 0x38 & 0xf;
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar11 != 0) {
    local_b8 = uVar11 << 2;
    uVar11 = 0;
    puVar5 = (undefined *)0xf;
    local_c8 = param_1;
    local_c0 = param_2;
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_1007069c0:
    do {
      local_b0 = puVar7;
      puVar4 = puVar5;
      __sSS5index_8offsetBySS5IndexVAD_SitF(puVar5,2,param_1,param_2);
      uVar16 = (ulong)puVar4 >> 0xe;
      if (uVar16 < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100706dc4);
        (*pcVar2)();
      }
      puVar7 = puVar4;
      uVar10 = param_1;
      uVar13 = param_2;
      __sSSySsSnySS5IndexVGcig();
      uVar11 = uVar16;
      if (((ulong)puVar5 ^ (ulong)puVar7) >> 0xe == 0) {
        _swift_bridgeObjectRelease(uVar13);
      }
      else {
        puVar18 = puVar5;
        puVar6 = puVar7;
        uVar12 = uVar10;
        (*(code *)PTR____chkstk_darwin_100995498)();
        puVar14 = auStack_f0 + lVar3;
        *(undefined8 *)((long)auStack_e0 + lVar3) = 0x10;
        local_a0 = puVar18;
        puStack_98 = puVar6;
        local_90 = uVar12;
        uStack_88 = uVar13;
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined ***)((long)auStack_110 + lVar3) = &local_a0;
        *(code **)((long)auStack_110 + lVar3 + 8) = FUN_100706e14;
        *(undefined1 **)((long)auStack_110 + lVar3 + 0x10) = puVar14;
        if ((uVar13 >> 0x3c & 1) == 0) {
          if ((uVar13 >> 0x3d & 1) == 0) {
            if ((uVar10 >> 0x3c & 1) == 0) {
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(uVar10,uVar13);
            }
            FUN_1007068c8(&local_64);
          }
          else {
            uStack_70 = uVar13 & 0xffffffffffffff;
            local_78 = uVar10;
            FUN_1007068c8(&local_7a,&local_78,uVar13 >> 0x38 & 0xf,&local_a0,FUN_100706e14);
            local_64 = CONCAT11(local_79,local_7a);
          }
          puVar18 = (undefined *)(ulong)local_64;
        }
        else {
          puVar18 = (undefined *)0x0;
        }
        uVar15 = (uint)(uVar13 >> 0x3c) & 1;
        local_78 = CONCAT71(local_78._1_7_,(char)uVar15);
        if (uVar15 == 0) {
          _swift_bridgeObjectRelease(uVar13);
          uVar15 = (uint)puVar18;
          puVar5 = puVar18;
          param_1 = local_c8;
          param_2 = local_c0;
          puVar7 = local_b0;
        }
        else {
          FUN_100706168(puVar5,puVar7,uVar10,uVar13,0x10);
          _swift_bridgeObjectRelease(uVar13);
          uVar15 = (uint)puVar5;
          param_1 = local_c8;
          param_2 = local_c0;
          puVar7 = local_b0;
        }
        local_c8 = param_1;
        local_c0 = param_2;
        local_b0 = puVar7;
        if ((uVar15 >> 8 & 1) == 0) {
          puVar18 = puVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar6 = puVar7;
          if (((ulong)puVar18 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            FUN_10070652c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,
                          PTR__swift_bridgeObjectRelease_100995eb8);
          }
          uVar10 = *(ulong *)(puVar6 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_10070652c(puVar7,uVar10 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_100995eb8);
          }
          *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
          puVar7[uVar10 + 0x20] = (char)puVar5;
          puVar5 = puVar4;
          param_1 = local_c8;
          if (local_b8 <= uVar16) break;
          goto LAB_1007069c0;
        }
      }
      puVar5 = puVar4;
      puVar7 = local_b0;
    } while (uVar16 < local_b8);
  }
  lVar3 = *(long *)(puVar7 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(puVar7);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100706508(0,lVar3,0);
    lVar17 = 0x20;
    uVar11 = *(ulong *)(local_a0 + 0x10);
    do {
      bVar1 = puVar7[lVar17];
      uVar16 = uVar11 + 1;
      if (*(ulong *)(local_a0 + 0x18) >> 1 <= uVar11) {
        FUN_100706508(1 < *(ulong *)(local_a0 + 0x18),uVar16,1);
      }
      puVar5 = local_a0;
      *(ulong *)(local_a0 + 0x10) = uVar16;
      local_a0[uVar11 + 0x20] = bVar1 ^ 0x5a;
      lVar17 = lVar17 + 1;
      lVar3 = lVar3 + -1;
      uVar11 = uVar16;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(puVar7);
  }
  uVar11 = local_d0;
  local_a0 = puVar5;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(local_d0);
  puVar7 = &DAT_100a76738;
  FUN_100004bb4(&DAT_100a76738,&DAT_10080b238);
  puVar4 = puVar7;
  FUN_100706dc4();
  ppuVar8 = &local_a0;
  uVar16 = uVar11;
  __sSS10FoundationE5bytes8encodingSSSgxh_SSAAE8EncodingVtcSTRzs5UInt8V7ElementRtzlufC
            (ppuVar8,uVar11,puVar7,puVar4);
  _swift_bridgeObjectRelease(puVar5);
  if (uVar16 != 0) {
    uVar10 = uVar16;
    __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
              (ppuVar8,uVar16,0);
    _swift_bridgeObjectRelease(uVar16);
    if (uVar10 >> 0x3c < 0xf) {
      __sSS10FoundationE8EncodingV4utf8ACvgZ(uVar11);
      ppuVar9 = ppuVar8;
      uVar16 = uVar10;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(ppuVar8,uVar10,uVar11);
      FUN_100006cc8(ppuVar8,uVar10);
      ppuVar8 = (undefined **)0x0;
      if (uVar16 != 0) {
        ppuVar8 = ppuVar9;
      }
      uVar11 = 0xe000000000000000;
      if (uVar16 != 0) {
        uVar11 = uVar16;
      }
      goto LAB_100706da0;
    }
  }
  ppuVar8 = (undefined **)0x0;
  uVar11 = 0xe000000000000000;
LAB_100706da0:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = ppuVar8;
  return auVar19;
}

