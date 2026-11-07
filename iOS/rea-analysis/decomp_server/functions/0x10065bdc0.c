// rea decompile_all
// name: FUN_10065bdc0
// address: 0x10065bdc0
// body: available
// range: 0x10065bdc0-0x10065c4fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10065bdc0(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 *local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined1 *local_d0;
  long local_c8;
  ulong local_c0;
  long local_b8;
  undefined1 *local_b0;
  undefined1 *local_a0;
  char local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_78;
  undefined *local_70;
  
  lVar12 = *(long *)(param_4 + 8);
  lVar15 = *(long *)(lVar12 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar15,param_3,PTR___sSlTL_1009959e8,PTR___s11SubSequenceSlTl_1009956d0);
  puVar5 = PTR___sSyTL_100995a98;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar1,PTR___sSyTL_100995a98,PTR___sSy11SubSequenceSl_SyTn_100995a88);
  lVar2 = 0;
  local_c8 = param_4;
  _swift_getAssociatedTypeWitness(0,param_4,uVar1,puVar5,PTR___s8UTF8ViewSyTl_100995718);
  lVar14 = *(long *)(lVar2 + -8);
  lVar8 = (long)&local_110 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  local_d8 = lVar2;
  local_b8 = lVar8;
  _swift_checkMetadataState(0,uVar1);
  lVar2 = *(long *)(uVar3 - 8);
  uVar9 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar13 = (undefined1 *)(lVar8 - uVar9);
  puVar11 = puVar13 + -uVar9;
  if (param_2 - 0x24U < 0xffffffffffffffde) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10065c48c);
    (*pcVar10)();
  }
  uVar9 = param_3;
  lVar8 = lVar15;
  local_b0 = puVar11;
  __sSl7isEmptySbvgTj();
  if ((uVar9 & 1) == 0) {
    local_110 = puVar13;
    local_f8 = lVar14;
    local_f0 = lVar2;
    local_e8 = param_2;
    local_c0 = uVar3;
    FUN_10065e570();
    __sSl8endIndex0B0QzvgTj(&local_90,param_3,lVar15);
    local_e0 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar13 = local_90;
    while( true ) {
      lVar2 = 0;
      local_d0 = puVar13;
      do {
        __sSl10startIndex0B0QzvgTj(&local_88,param_3,lVar15);
        uVar3 = local_c0;
        puVar7 = local_110;
        uVar9 = (ulong)puVar13 >> 0xe;
        if (uVar9 == (ulong)local_88 >> 0xe) {
          if (uVar9 != (ulong)local_d0 >> 0xe) {
            if ((ulong)local_d0 >> 0xe < uVar9) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10065c4a4);
              (*pcVar10)();
            }
            local_80 = local_d0;
            local_88 = puVar13;
            __sSly11SubSequenceQzSny5IndexQzGcigTj(local_110,&local_88,param_3,lVar15);
            _swift_getAssociatedConformanceWitness
                      (lVar15,param_3,uVar3,PTR___sSlTL_1009959e8,
                       PTR___sSl11SubSequenceSl_SlTn_1009959d8);
            uVar9 = uVar3;
            __sSl7isEmptySbvgTj(uVar3,lVar15);
            lVar2 = local_b8;
            lVar12 = local_c8;
            if ((uVar9 & 1) != 0) {
              pcVar10 = *(code **)(local_f0 + 8);
              goto LAB_10065c4b0;
            }
            __sSy4utf88UTF8ViewQzvgTj(local_b8,uVar3,local_c8);
            local_b0 = puVar11;
            *(ulong *)(puVar11 + -0x20) = uVar3;
            *(long *)(puVar11 + -0x18) = lVar12;
            *(long *)(puVar11 + -0x10) = local_e8;
            lVar15 = local_d8;
            lVar14 = lVar12;
            _swift_getAssociatedConformanceWitness
                      (lVar12,uVar3,local_d8,PTR___sSyTL_100995a98,
                       PTR___sSy8UTF8ViewSy_SlTn_100995a90);
            local_d0 = *(undefined1 **)(lVar14 + 8);
            puVar6 = &DAT_100ab9098;
            FUN_100004bb4(&DAT_100ab9098,&DAT_10084b380);
            __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
                      (&local_88,FUN_10065e9f4,(long)puVar11 + -0x30,puVar6,lVar15,local_d0);
            (**(code **)(local_f8 + 8))(lVar2,lVar15);
            puVar11 = local_80;
            if (((ulong)local_80 & 0x100) == 0) {
              (**(code **)(local_f0 + 8))(puVar7,local_c0);
              puVar13 = local_88;
              if (((ulong)puVar11 & 1) != 0) goto LAB_10065c368;
            }
            else {
              FUN_100655f14();
              uVar3 = local_c0;
              FUN_10065d73c(&local_a0,puVar7,local_e8,local_c0,PTR___sSuN_100995a50,lVar12,lVar2);
              (**(code **)(local_f0 + 8))(puVar7,uVar3);
              puVar13 = local_a0;
              if (local_98 == '\x01') goto LAB_10065c368;
            }
            puVar6 = puVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar4 = puVar5;
            if (((ulong)puVar6 & 1) == 0) {
              puVar4 = (undefined *)0x0;
              FUN_10062958c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
            }
            uVar3 = *(ulong *)(puVar4 + 0x10);
            puVar5 = puVar4;
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
              puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
              FUN_10062958c(puVar5,uVar3 + 1,1,puVar4);
            }
            *(ulong *)(puVar5 + 0x10) = uVar3 + 1;
            *(undefined1 **)(puVar5 + uVar3 * 8 + 0x20) = puVar13;
          }
          if (lVar8 == 0) {
            local_88 = (undefined1 *)0x0;
            local_80 = (undefined1 *)0x0;
            local_78 = 2;
            local_70 = puVar5;
            FUN_100645d2c();
          }
          else {
            local_78 = 0;
            local_88 = (undefined1 *)0x0;
            local_80 = (undefined1 *)0x0;
            local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
            for (lVar12 = *(long *)(puVar5 + 0x10); lVar12 != 0; lVar12 = lVar12 + -1) {
              if (*(long *)(puVar5 + 0x10) < lVar12) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10065c484);
                (*pcVar10)();
              }
              uVar1 = *(undefined8 *)(puVar5 + lVar12 * 8 + 0x18);
              FUN_100653350(lVar8);
              FUN_10064252c(uVar1,0);
            }
            _swift_bridgeObjectRelease(puVar5);
          }
          (**(code **)(*(long *)(param_3 - 8) + 8))(param_1,param_3);
          return local_88;
        }
        local_a0 = puVar13;
        __sSK5index6before5IndexQzAD_tFTj(&local_88,&local_a0,param_3,lVar12);
        puVar13 = local_88;
        lVar14 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10065c488);
          (*pcVar10)();
        }
        lVar2 = lVar2 + 1;
      } while (lVar14 != param_2);
      if ((ulong)local_d0 >> 0xe < (ulong)local_88 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10065c490);
        (*pcVar10)();
      }
      local_80 = local_d0;
      local_100 = lVar12;
      __sSly11SubSequenceQzSny5IndexQzGcigTj(local_b0,&local_88,param_3,lVar15);
      uVar3 = local_c0;
      lVar12 = lVar15;
      _swift_getAssociatedConformanceWitness
                (lVar15,param_3,local_c0,PTR___sSlTL_1009959e8,
                 PTR___sSl11SubSequenceSl_SlTn_1009959d8);
      uVar9 = uVar3;
      __sSl7isEmptySbvgTj(uVar3,lVar12);
      lVar12 = local_c8;
      if ((uVar9 & 1) != 0) break;
      __sSy4utf88UTF8ViewQzvgTj(local_b8,uVar3,local_c8);
      local_d0 = puVar11;
      *(ulong *)(puVar11 + -0x20) = uVar3;
      *(long *)(puVar11 + -0x18) = lVar12;
      *(long *)(puVar11 + -0x10) = local_e8;
      lVar2 = local_d8;
      _swift_getAssociatedConformanceWitness
                (lVar12,uVar3,local_d8,PTR___sSyTL_100995a98,PTR___sSy8UTF8ViewSy_SlTn_100995a90);
      local_108 = *(undefined8 *)(lVar12 + 8);
      puVar6 = &DAT_100ab9098;
      FUN_100004bb4(&DAT_100ab9098,&DAT_10084b380);
      lVar12 = local_b8;
      uVar1 = local_e0;
      __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
                (&local_88,FUN_10065e5c4,(long)puVar11 + -0x30,puVar6,lVar2,local_108);
      puVar11 = local_d0;
      (**(code **)(local_f8 + 8))(lVar12,lVar2);
      puVar7 = local_80;
      local_e0 = uVar1;
      if (((ulong)local_80 & 0x100) == 0) {
        local_d0 = local_88;
        (**(code **)(local_f0 + 8))(local_b0,local_c0);
        if (((ulong)puVar7 & 1) != 0) goto LAB_10065c368;
      }
      else {
        FUN_100655f14();
        puVar7 = local_b0;
        uVar3 = local_c0;
        FUN_10065d73c(&local_a0,local_b0,local_e8,local_c0,PTR___sSuN_100995a50,local_c8,lVar12);
        (**(code **)(local_f0 + 8))(puVar7,uVar3);
        if (local_98 == '\x01') goto LAB_10065c368;
        local_d0 = local_a0;
      }
      lVar12 = local_100;
      puVar6 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_10062958c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar3 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_10062958c(puVar5,uVar3 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar3 + 1;
      *(undefined1 **)(puVar5 + uVar3 * 8 + 0x20) = local_d0;
    }
    pcVar10 = *(code **)(local_f0 + 8);
    puVar7 = local_b0;
LAB_10065c4b0:
    (*pcVar10)(puVar7,uVar3);
LAB_10065c368:
    (**(code **)(*(long *)(param_3 - 8) + 8))(param_1,param_3);
    _swift_bridgeObjectRelease(puVar5);
  }
  else {
    (**(code **)(*(long *)(param_3 - 8) + 8))(param_1,param_3);
  }
  return 0;
}

