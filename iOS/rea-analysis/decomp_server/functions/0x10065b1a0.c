// rea decompile_all
// name: FUN_10065b1a0
// address: 0x10065b1a0
// body: available
// range: 0x10065b1a0-0x10065b78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 **** FUN_10065b1a0(undefined8 ****param_1,undefined *param_2,undefined8 ***param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 uVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  undefined1 auStack_e0 [8];
  undefined1 *local_d8;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  undefined8 ***local_c0;
  undefined8 ***local_b8;
  undefined8 **local_b0;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***local_90;
  undefined *local_88;
  undefined8 ***local_80;
  ulong uStack_78;
  byte local_69;
  byte local_68;
  
  ppppuVar4 = (undefined8 ****)auStack_e0;
  local_b0 = param_3;
  if ((long)param_3 - 0x24U < 0xffffffffffffffde) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065b700);
    (*pcVar3)();
  }
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)param_2 >> 0x38 & 0xf;
  }
  puVar10 = param_2;
  if (uVar2 == 0) {
LAB_10065b6c4:
    _swift_bridgeObjectRelease(puVar10);
    local_a0 = (undefined8 ***)0x0;
  }
  else {
    puVar12 = param_2;
    FUN_10065e570();
    uVar1 = 0xb;
    if (((uint)((ulong)param_2 >> 0x3c) & (uint)(((ulong)param_1 & 0x800000000000000) == 0)) == 0) {
      uVar1 = 7;
    }
    ppppuVar5 = (undefined8 ****)(uVar1 | uVar2 << 0x10);
    ppppuVar18 = (undefined8 ****)0x0;
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      lVar19 = 0;
      ppppuVar6 = ppppuVar5;
      while( true ) {
        __sSS5index6beforeSS5IndexVAD_tF();
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065b6fc);
          (*pcVar3)();
        }
        if ((undefined8 ***)(lVar19 + 1) == param_3) break;
        lVar19 = lVar19 + 1;
        if (ppppuVar6 < (undefined8 ****)0x4000) {
          if (ppppuVar5 < (undefined8 ****)0x4000) goto LAB_10065b474;
          puVar8 = param_2;
          __sSSySsSnySS5IndexVGcig();
          _swift_bridgeObjectRelease(param_2);
          if (((ulong)ppppuVar6 ^ (ulong)ppppuVar5) < 0x4000) {
            _swift_bridgeObjectRelease(puVar10);
            puVar10 = puVar8;
            goto LAB_10065b6c4;
          }
          ppppuVar16 = ppppuVar4 + -4;
          local_b8 = ppppuVar16;
          ppppuVar4[-2] = (undefined8 ***)local_b0;
          local_a0 = ppppuVar6;
          pppuStack_98 = ppppuVar5;
          local_90 = param_1;
          local_88 = puVar8;
          ppppuVar4[-8] = &local_a0;
          ppppuVar4[-7] = (undefined8 ***)FUN_10065ea08;
          ppppuVar4[-6] = ppppuVar16;
          _swift_bridgeObjectRetain(puVar8);
          if (((ulong)puVar8 >> 0x3c & 1) == 0) {
            if (((ulong)puVar8 >> 0x3d & 1) == 0) {
              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                ppppuVar15 = param_1;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,puVar8);
                ppppuVar14 = (undefined8 ****)ppppuVar4[-8];
                ppppuVar16 = (undefined8 ****)ppppuVar4[-6];
              }
              else {
                ppppuVar15 = (undefined8 ****)(((ulong)puVar8 & 0xfffffffffffffff) + 0x20);
                ppppuVar14 = &local_a0;
              }
              bVar11 = (byte)*ppppuVar14;
              FUN_10000d604();
              if (ppppuVar18 == (undefined8 ****)0x0) {
                local_68 = bVar11 & 1;
                goto LAB_10065b5f0;
              }
            }
            else {
              uStack_78 = (ulong)puVar8 & 0xffffffffffffff;
              ppppuVar15 = &local_80;
              ppppuVar4 = (undefined8 ****)local_a0;
              local_80 = param_1;
              FUN_10000d604(ppppuVar15,local_a0,pppuStack_98,local_90,local_88,FUN_10065ea08,
                            ppppuVar16);
              if (ppppuVar18 == (undefined8 ****)0x0) {
                local_68 = (byte)ppppuVar4 & 1;
                goto LAB_10065b5f0;
              }
            }
          }
          else {
            ppppuVar15 = (undefined8 ****)0x0;
            local_68 = 0;
LAB_10065b5f0:
            bVar11 = (byte)((ulong)puVar8 >> 0x3c);
            local_69 = bVar11 & 1;
            ppppuVar18 = (undefined8 ****)(ulong)(CONCAT11(bVar11,local_68) & 0x1ff);
            ppppuVar16 = ppppuVar15;
          }
          _swift_bridgeObjectRelease(puVar8);
          if (((uint)ppppuVar18 >> 8 & 1) != 0) {
            FUN_10065d640(ppppuVar6,ppppuVar5,param_1,puVar8,local_b0);
            ppppuVar16 = ppppuVar6;
            ppppuVar18 = ppppuVar5;
          }
          _swift_bridgeObjectRelease(puVar8);
          if (((ulong)ppppuVar18 & 1) != 0) goto LAB_10065b6c4;
          puVar8 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar10;
          if (((ulong)puVar8 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_10062958c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar2 = *(ulong *)(puVar9 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_10062958c(puVar10,uVar2 + 1,1,puVar9);
          }
          *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
          *(undefined8 *****)(puVar10 + uVar2 * 8 + 0x20) = ppppuVar16;
          goto joined_r0x00010065b674;
        }
      }
      if ((ulong)ppppuVar5 >> 0xe < (ulong)ppppuVar6 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10065b704);
        (*pcVar3)();
      }
      ppppuVar16 = param_1;
      puVar8 = param_2;
      local_c8 = ppppuVar6;
      __sSSySsSnySS5IndexVGcig();
      if (((ulong)ppppuVar6 ^ (ulong)ppppuVar5) >> 0xe == 0) {
        _swift_bridgeObjectRelease(puVar10);
        _swift_bridgeObjectRelease(param_2);
        puVar10 = puVar8;
        goto LAB_10065b6c4;
      }
      ppppuVar4[-2] = (undefined8 ***)local_b0;
      local_a0 = ppppuVar6;
      pppuStack_98 = ppppuVar5;
      local_90 = ppppuVar16;
      local_88 = puVar8;
      ppppuVar15 = ppppuVar4 + -10;
      ppppuVar4[-8] = &local_a0;
      ppppuVar4[-7] = (undefined8 ***)FUN_10065ea08;
      ppppuVar4[-6] = ppppuVar4 + -4;
      if (((ulong)puVar8 >> 0x3c & 1) == 0) {
        local_c0 = ppppuVar4 + -4;
        local_b8 = ppppuVar16;
        ppppuVar14 = ppppuVar18;
        if (((ulong)puVar8 >> 0x3d & 1) == 0) {
          local_d8 = (undefined1 *)ppppuVar4;
          if (((ulong)ppppuVar16 >> 0x3c & 1) == 0) {
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(ppppuVar16,puVar8);
            ppppuVar4 = (undefined8 ****)ppppuVar4[-8];
          }
          else {
            ppppuVar16 = (undefined8 ****)(((ulong)puVar8 & 0xfffffffffffffff) + 0x20);
            ppppuVar4 = &local_a0;
          }
          bVar11 = (byte)*ppppuVar4;
          FUN_10000d604();
          ppppuVar4 = (undefined8 ****)local_d8;
          if (ppppuVar18 == (undefined8 ****)0x0) {
LAB_10065b378:
            local_68 = bVar11 & 1;
            goto LAB_10065b37c;
          }
        }
        else {
          uStack_78 = (ulong)puVar8 & 0xffffffffffffff;
          ppppuVar7 = &local_80;
          ppppuVar13 = (undefined8 ****)local_a0;
          local_80 = ppppuVar16;
          FUN_10000d604(ppppuVar7,local_a0,pppuStack_98,local_90,local_88,FUN_10065ea08);
          ppppuVar15 = ppppuVar4;
          if (ppppuVar18 == (undefined8 ****)0x0) {
            bVar11 = (byte)ppppuVar13;
            ppppuVar16 = ppppuVar7;
            goto LAB_10065b378;
          }
        }
      }
      else {
        ppppuVar16 = (undefined8 ****)0x0;
        local_68 = 0;
LAB_10065b37c:
        bVar11 = (byte)((ulong)puVar8 >> 0x3c);
        local_69 = bVar11 & 1;
        ppppuVar15 = (undefined8 ****)(ulong)(CONCAT11(bVar11,local_68) & 0x1ff);
        ppppuVar14 = ppppuVar16;
      }
      local_d0 = ppppuVar18;
      if (((uint)ppppuVar15 >> 8 & 1) != 0) {
        FUN_10065d640();
        ppppuVar15 = ppppuVar5;
        ppppuVar14 = ppppuVar6;
      }
      _swift_bridgeObjectRelease(puVar8);
      if (((ulong)ppppuVar15 & 1) != 0) {
        _swift_bridgeObjectRelease(puVar10);
        puVar10 = param_2;
        goto LAB_10065b6c4;
      }
      puVar8 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_10062958c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar2 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_10062958c(puVar10,uVar2 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
      *(undefined8 *****)(puVar10 + uVar2 * 8 + 0x20) = ppppuVar14;
      ppppuVar5 = (undefined8 ****)local_c8;
      ppppuVar18 = (undefined8 ****)local_d0;
    } while ((undefined8 ****)0x3fff < local_c8);
LAB_10065b474:
    _swift_bridgeObjectRelease(param_2);
joined_r0x00010065b674:
    if (puVar12 == (undefined *)0x0) {
      local_a0 = (undefined8 ***)0x0;
      pppuStack_98 = (undefined8 ***)0x0;
      uVar2 = (ulong)local_90 >> 8;
      local_90 = (undefined8 ***)CONCAT71((int7)uVar2,2);
      local_88 = puVar10;
      FUN_100645d2c();
    }
    else {
      local_90 = (undefined8 ***)((ulong)local_90 & 0xffffffffffffff00);
      local_a0 = (undefined8 ***)0x0;
      pppuStack_98 = (undefined8 ***)0x0;
      local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
      for (lVar19 = *(long *)(puVar10 + 0x10); lVar19 != 0; lVar19 = lVar19 + -1) {
        if (*(long *)(puVar10 + 0x10) < lVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065b5e0);
          (*pcVar3)();
        }
        uVar17 = *(undefined8 *)(puVar10 + lVar19 * 8 + 0x18);
        FUN_100653350(puVar12);
        FUN_10064252c(uVar17,0);
      }
      _swift_bridgeObjectRelease(puVar10);
    }
  }
  return (undefined8 ****)local_a0;
}

