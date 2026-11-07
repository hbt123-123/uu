// rea decompile_all
// name: FUN_1007b565c
// address: 0x1007b565c
// body: available
// range: 0x1007b565c-0x1007b5acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007b5ac0) */

undefined1  [16] FUN_1007b565c(undefined *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  long local_d0;
  long lStack_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  ulong *local_a0;
  ulong local_98;
  ulong local_90;
  undefined *local_88;
  long local_80;
  ulong local_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  local_d0 = *(long *)(lVar5 + -8);
  uVar8 = (long)&local_d0 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  lStack_c8 = lVar5;
  FUN_100033898(0,*(undefined8 *)(param_1 + 0x10),0,PTR___swiftEmptyArrayStorage_100995ea0);
  local_c0 = uVar6;
  __s10Foundation12CharacterSetV13alphanumericsACvgZ(uVar8);
  __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x2e5f2d,0xe300000000000000);
  local_a0 = (ulong *)(param_1 + 0x40);
  uVar16 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((long)uVar16 < 0x40) {
    uVar6 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar6 = uVar6 & *local_a0;
  uVar16 = uVar16 + 0x3f >> 6;
  puVar7 = param_1;
  _swift_bridgeObjectRetain(param_1);
  lVar5 = 0;
  local_b0 = uVar16 - 4;
  local_b8 = 0;
  local_a8 = param_1 + 0x60;
  puVar11 = PTR___sSSN_1009957f8;
  local_98 = uVar16;
  local_90 = uVar8;
  local_88 = param_1;
  if (uVar6 != 0) goto LAB_1007b5790;
LAB_1007b57ac:
  lVar15 = lVar5 + 1;
  if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b5ab4);
    (*pcVar3)();
  }
  if ((long)local_98 <= lVar15) {
LAB_1007b59fc:
    _swift_release(local_88);
    uVar6 = local_c0;
    local_70 = local_c0;
    _swift_bridgeObjectRetain_n(local_c0,2);
    FUN_1007b4a84(&local_70);
    _swift_bridgeObjectRelease(uVar6);
    uVar16 = local_70;
    puVar7 = &DAT_100abc7b8;
    FUN_1007b4550(&DAT_100abc7b8);
    puVar11 = puVar7;
    FUN_10013048c();
    uVar12 = 0x2c;
    uVar14 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar7,puVar11);
    _swift_release(uVar16);
    (**(code **)(local_d0 + 8))(uVar8,lStack_c8);
    _swift_bridgeObjectRelease(uVar6);
    auVar17._8_8_ = uVar14;
    auVar17._0_8_ = uVar12;
    return auVar17;
  }
  uVar6 = local_a0[lVar15];
  if (uVar6 == 0) {
    lVar15 = lVar5 + 2;
    if ((long)local_98 <= lVar15) goto LAB_1007b59fc;
    uVar6 = local_a0[lVar15];
    if (uVar6 == 0) {
      lVar15 = lVar5 + 3;
      if ((long)local_98 <= lVar15) goto LAB_1007b59fc;
      uVar6 = local_a0[lVar15];
      if (uVar6 == 0) {
        if ((long)local_98 <= lVar5 + 4) goto LAB_1007b59fc;
        while (uVar6 = *(ulong *)(local_a8 + lVar5 * 8), uVar6 == 0) {
          lVar5 = lVar5 + 1;
          if (local_b0 == lVar5) goto LAB_1007b59fc;
        }
        lVar15 = lVar5 + 4;
      }
    }
  }
  uVar16 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
  uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
  uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
  uVar6 = uVar6 - 1 & uVar6;
  uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + lVar15 * 0x40;
  local_80 = lVar15;
  do {
    puVar1 = (ulong *)(*(long *)(local_88 + 0x30) + uVar16 * 0x10);
    local_70 = *puVar1;
    puVar2 = (undefined *)puVar1[1];
    puVar1 = (ulong *)(*(long *)(local_88 + 0x38) + uVar16 * 0x10);
    uVar16 = *puVar1;
    puVar9 = (undefined *)puVar1[1];
    puStack_68 = puVar2;
    FUN_10009ff0c();
    _swift_bridgeObjectRetain(puVar2);
    _swift_bridgeObjectRetain(puVar9);
    uVar10 = uVar8;
    puVar13 = puVar11;
    __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
              (uVar8,puVar11,puVar7);
    if (puVar13 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar2);
      _swift_bridgeObjectRelease();
      puVar7 = puVar9;
      lVar5 = local_80;
    }
    else {
      local_70 = uVar16;
      puStack_68 = puVar9;
      __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                (uVar8,puVar11,puVar7);
      if (puVar11 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(puVar13);
        _swift_bridgeObjectRelease(puVar2);
      }
      else {
        uVar16 = uVar10 & 0xffffffffffff;
        if (((ulong)puVar13 & 0x2000000000000000) != 0) {
          uVar16 = (ulong)puVar13 >> 0x38 & 0xf;
        }
        if (uVar16 != 0) {
          uVar16 = uVar8 & 0xffffffffffff;
          if (((ulong)puVar11 & 0x2000000000000000) != 0) {
            uVar16 = (ulong)puVar11 >> 0x38 & 0xf;
          }
          if (uVar16 != 0) {
            local_70 = uVar10;
            puStack_68 = puVar13;
            _swift_bridgeObjectRetain(puVar13);
            __sSS6appendyySSF(0x3d,0xe100000000000000);
            __sSS6appendyySSF(uVar8,puVar11);
            puVar7 = puStack_68;
            uVar8 = local_70;
            uVar16 = local_70;
            __sSS5countSivg(local_70,puStack_68);
            if (SCARRY8(uVar16,local_b8)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b5ab8);
              (*pcVar3)();
            }
            if (0x2000 < (long)(uVar16 + local_b8)) {
              _swift_bridgeObjectRelease(puVar2);
              _swift_bridgeObjectRelease(puVar9);
              _swift_bridgeObjectRelease(puVar13);
              _swift_bridgeObjectRelease(puVar11);
              puVar9 = puVar7;
              goto LAB_1007b5778;
            }
            uVar16 = uVar8;
            __sSS5countSivg(uVar8,puVar7);
            if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b5abc);
              (*pcVar3)();
            }
            bVar4 = SCARRY8(local_b8,uVar16 + 1);
            local_b8 = local_b8 + uVar16 + 1;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b5ac0);
              (*pcVar3)();
            }
            uVar16 = *(ulong *)(local_c0 + 0x10);
            if (*(ulong *)(local_c0 + 0x18) >> 1 <= uVar16) {
              uVar10 = (ulong)(1 < *(ulong *)(local_c0 + 0x18));
              FUN_100033898(uVar10,uVar16 + 1,1,local_c0);
              local_c0 = uVar10;
            }
            *(ulong *)(local_c0 + 0x10) = uVar16 + 1;
            lVar5 = local_c0 + uVar16 * 0x10;
            *(ulong *)(lVar5 + 0x20) = uVar8;
            *(undefined **)(lVar5 + 0x28) = puVar7;
          }
        }
        _swift_bridgeObjectRelease(puVar2);
        _swift_bridgeObjectRelease(puVar9);
        _swift_bridgeObjectRelease(puVar13);
        puVar9 = puVar11;
      }
LAB_1007b5778:
      _swift_bridgeObjectRelease();
      puVar7 = puVar9;
      puVar11 = PTR___sSSN_1009957f8;
      uVar8 = local_90;
      lVar5 = local_80;
    }
    local_80 = lVar5;
    if (uVar6 == 0) goto LAB_1007b57ac;
LAB_1007b5790:
    uVar16 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 - 1 & uVar6;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar5 << 6;
    local_80 = lVar5;
  } while( true );
}

