// rea decompile_all
// name: FUN_1000b3d2c
// address: 0x1000b3d2c
// body: available
// range: 0x1000b3d2c-0x1000b43af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b3d2c(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auStack_150 [16];
  undefined **local_140;
  undefined *local_130;
  undefined *local_128;
  ulong local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  ulong local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  undefined1 local_b8;
  undefined1 auStack_88 [24];
  undefined *local_70;
  
  puVar8 = PTR___swiftEmptySetSingleton_1000f0750;
  local_f0 = param_2;
  if (((ulong)PTR___swiftEmptyArrayStorage_1000f0740 >> 0x3e != 0) &&
     (puVar14 = PTR___swiftEmptyArrayStorage_1000f0740, __ss18_CocoaArrayWrapperV8endIndexSivg(),
     puVar8 = PTR___swiftEmptySetSingleton_1000f0750, puVar14 != (undefined *)0x0)) {
    puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_1000b519c();
  }
  local_70 = puVar8;
  FUN_1000b4588();
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 3;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(undefined8 *)(puVar8 + 0x20) = param_1;
  puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100073a3c();
  local_e0 = puVar14;
  _swift_retain(param_1);
  puVar14 = (undefined *)0x0;
  local_110 = 0;
LAB_1000b3dd4:
  puVar10 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  puVar15 = puVar10;
  if ((long)puVar8 < 0) {
    puVar15 = puVar8;
  }
  local_e8 = (undefined *)((ulong)puVar8 & 0xc000000000000001);
  local_f8 = puVar10 + 0x20;
  uVar12 = (ulong)puVar8 >> 0x3e;
  if (uVar12 == 0) goto LAB_1000b3e30;
LAB_1000b3df8:
  puVar16 = puVar15;
  __ss18_CocoaArrayWrapperV8endIndexSivg();
  if ((long)puVar16 < (long)puVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b43ac);
    (*pcVar3)();
  }
  puVar11 = puVar15;
  __ss18_CocoaArrayWrapperV8endIndexSivg();
  if ((long)puVar11 < (long)puVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b43b0);
    (*pcVar3)();
  }
  puVar11 = puVar15;
  __ss18_CocoaArrayWrapperV8endIndexSivg();
  if ((long)puVar11 < (long)puVar16) {
LAB_1000b4368:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b436c);
    (*pcVar3)();
  }
  do {
    if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4370);
      (*pcVar3)();
    }
    if ((local_e8 == (undefined *)0x0) || (puVar14 == puVar16)) {
      _swift_bridgeObjectRetain(puVar8);
      if (uVar12 == 0) goto LAB_1000b3e9c;
LAB_1000b3ec0:
      _swift_bridgeObjectRelease(puVar8);
      puVar11 = puVar14;
      puVar7 = puVar15;
      __ss18_CocoaArrayWrapperVys12_SliceBufferVyyXlGSnySiGcig(puVar14);
      param_4 = (undefined *)((ulong)param_4 >> 1);
      bVar4 = SBORROW8((long)puVar7,(long)param_4);
      lVar1 = (long)puVar7 - (long)param_4;
      if (puVar7 == param_4) {
LAB_1000b42a4:
        _swift_bridgeObjectRelease(puVar8);
        _swift_bridgeObjectRelease(local_e0);
        _swift_unknownObjectRelease(puVar11);
        _swift_bridgeObjectRelease(local_70);
        return;
      }
    }
    else {
      if (puVar16 <= puVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4380);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(puVar8);
      puVar11 = puVar14;
      do {
        puVar7 = puVar11 + 1;
        puVar6 = &DAT_100104458;
        FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(puVar11,puVar8,puVar6);
        puVar11 = puVar7;
      } while (puVar16 != puVar7);
      if (uVar12 != 0) goto LAB_1000b3ec0;
LAB_1000b3e9c:
      bVar4 = SBORROW8((long)puVar14,(long)puVar16);
      lVar1 = (long)puVar14 - (long)puVar16;
      bVar5 = puVar14 == puVar16;
      puVar16 = local_f8;
      puVar7 = puVar14;
      puVar11 = puVar10;
      if (bVar5) goto LAB_1000b42a4;
    }
    if (lVar1 < 0 == bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4374);
      (*pcVar3)();
    }
    puVar16 = *(undefined **)(puVar16 + (long)puVar7 * 8);
    _swift_retain(puVar16);
    _swift_unknownObjectRelease(puVar11);
    bVar4 = SCARRY8((long)puVar14,1);
    puVar14 = puVar14 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4378);
      (*pcVar3)();
    }
    if (*(long *)(puVar16 + 0x10) == local_f0) {
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(local_70);
      puVar8 = &DAT_1000fb5d0;
      _swift_allocObject(&DAT_1000fb5d0,0x18,7);
      *(undefined **)(puVar8 + 0x10) = local_e0;
      puVar14 = &DAT_1000fb5f8;
      _swift_allocObject(&DAT_1000fb5f8,0x20,7);
      *(code **)(puVar14 + 0x10) = FUN_1000b5458;
      *(undefined **)(puVar14 + 0x18) = puVar8;
      local_d0 = 1;
      local_c8 = FUN_1000b54a8;
      local_b8 = 0;
      local_d8 = puVar16;
      puStack_c0 = puVar14;
      FUN_1000b43b0();
      return;
    }
    _swift_retain(puVar16);
    FUN_100081a60(&local_d8,puVar16);
    _swift_release(local_d8);
    param_4 = (undefined *)0x0;
    _swift_beginAccess(puVar16 + 0x28,auStack_88,0);
    puVar11 = *(undefined **)(puVar16 + 0x28);
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
      puVar6 = local_108;
      puVar2 = local_e8;
      local_e8 = local_70;
    }
    else {
      puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
      if ((long)puVar11 < 0) {
        puVar7 = puVar11;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar6 = local_108;
      puVar2 = local_e8;
      local_e8 = local_70;
    }
    local_108 = puVar7;
    local_70 = local_e8;
    if (local_108 != (undefined *)0x0) {
      local_100 = (ulong)local_e8 & 0xc000000000000001;
      local_f8 = (undefined *)((ulong)puVar11 & 0xc000000000000001);
      local_120 = (ulong)puVar11 & 0xffffffffffffff8;
      local_128 = puVar11 + 0x20;
      local_118 = (undefined *)((ulong)local_e8 & 0xffffffffffffff8);
      if ((long)local_e8 < 0) {
        local_118 = local_e8;
      }
      local_130 = local_e8 + 0x38;
      _swift_bridgeObjectRetain(puVar11);
      puVar15 = (undefined *)0x0;
      uVar13 = local_110;
      break;
    }
    local_108 = puVar6;
    local_e8 = puVar2;
    _swift_release(puVar16);
    if (uVar12 != 0) goto LAB_1000b3df8;
LAB_1000b3e30:
    puVar16 = *(undefined **)(puVar10 + 0x10);
    if ((long)puVar16 < (long)puVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4368);
      (*pcVar3)();
    }
    if (SBORROW8((long)puVar16,(long)puVar16)) goto LAB_1000b4368;
  } while( true );
  do {
    if (local_f8 == (undefined *)0x0) {
      if (*(undefined **)(local_120 + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4388);
        (*pcVar3)();
      }
      puVar10 = *(undefined **)(local_128 + (long)puVar15 * 8);
      _swift_retain(puVar10);
    }
    else {
      puVar10 = puVar15;
      FUN_1000794e0(puVar15,puVar11);
    }
    bVar4 = SCARRY8((long)puVar15,1);
    puVar15 = puVar15 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b437c);
      (*pcVar3)();
    }
    if (local_100 == 0) {
      if (*(long *)(local_e8 + 0x10) != 0) {
        __ss6HasherV5_seedABSi_tcfC(&local_d8,*(undefined8 *)(local_e8 + 0x28));
        puVar7 = puVar10;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar9 = -1L << ((ulong)(byte)local_e8[0x20] & 0x3f);
        uVar12 = (ulong)puVar7 & (uVar9 ^ 0xffffffffffffffff);
        if ((*(ulong *)(local_130 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0)
        {
          do {
            if (*(undefined **)(*(long *)(local_e8 + 0x30) + uVar12 * 8) == puVar10)
            goto LAB_1000b3ff4;
            uVar12 = uVar12 + 1 & ~uVar9;
          } while ((*(ulong *)(local_130 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) & 1
                   ) != 0);
        }
      }
LAB_1000b4114:
      local_140 = &local_d8;
      uVar12 = 0;
      local_d8 = puVar10;
      FUN_1000b399c(FUN_1000b541c,auStack_150,puVar8);
      if ((uVar12 & 1) == 0) {
        _swift_retain(puVar10);
        puVar7 = puVar8;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        local_110 = uVar13;
        if (((((ulong)puVar7 & 1) == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((long)puVar8 < 0) {
              puVar6 = puVar8;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_10006f6e0(0,puVar6 + 1,1);
          param_4 = puVar8;
        }
        uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar12 = *(ulong *)(uVar9 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar12) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_10006f6e0(puVar8,uVar12 + 1,1);
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
          param_4 = puVar7;
        }
        *(ulong *)(uVar9 + 0x10) = uVar12 + 1;
        *(undefined **)(uVar9 + uVar12 * 8 + 0x20) = puVar10;
        uVar13 = local_110;
        if (((ulong)local_e0 & 0xc000000000000001) != 0) goto LAB_1000b4154;
LAB_1000b4204:
        puVar7 = local_e0;
        _swift_retain(puVar16);
        _swift_retain(puVar10);
      }
      else {
        if (((ulong)local_e0 & 0xc000000000000001) == 0) goto LAB_1000b4204;
LAB_1000b4154:
        puVar7 = (undefined *)((ulong)local_e0 & 0xffffffffffffff8);
        if ((long)local_e0 < 0) {
          puVar7 = local_e0;
        }
        _swift_retain(puVar16);
        _swift_retain(puVar10);
        puVar6 = puVar7;
        __ss17__CocoaDictionaryV5countSivg();
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b4384);
          (*pcVar3)();
        }
        FUN_1000b4668(puVar7,puVar6 + 1);
      }
      puVar6 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      local_d8 = puVar7;
      FUN_10009b5d4(puVar16,puVar10,puVar6);
      _swift_release_n(puVar10,2);
      local_e0 = local_d8;
    }
    else {
      puVar7 = puVar10;
      _swift_retain();
      __ss10__CocoaSetV8containsySbyXlF();
      _swift_release(puVar10);
      if (((ulong)puVar7 & 1) == 0) goto LAB_1000b4114;
LAB_1000b3ff4:
      _swift_release(puVar10);
    }
  } while (puVar15 != local_108);
  local_110 = uVar13;
  _swift_release(puVar16);
  _swift_bridgeObjectRelease(puVar11);
  goto LAB_1000b3dd4;
}

