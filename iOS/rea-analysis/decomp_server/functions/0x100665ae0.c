// rea decompile_all
// name: FUN_100665ae0
// address: 0x100665ae0
// body: available
// range: 0x100665ae0-0x100665cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100665ae0(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 ****local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined *)0x0;
  __s10Foundation4DataV8IteratorVMa();
  lVar13 = *(long *)(puVar3 + -8);
  puVar6 = (undefined *)((long)&local_80 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar1 = (uint)(param_2 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 == 0) {
      puVar12 = (undefined *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar11 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar11,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100665cbc);
        (*pcVar2)();
      }
      puVar12 = (undefined *)(long)(iVar11 - (int)param_1);
    }
  }
  else {
    if (uVar10 != 2) goto LAB_100665bc8;
    puVar12 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100665cb8);
      (*pcVar2)();
    }
  }
  if (puVar12 != (undefined *)0x0) {
    puVar4 = puVar12;
    FUN_100630840(puVar12,0);
    puVar5 = puVar6;
    __s10Foundation4DataV13_copyContents12initializingAC8IteratorV_SitSrys5UInt8VG_tF
              (puVar6,puVar4 + 0x20,puVar12,param_1,param_2);
    (**(code **)(lVar13 + 8))(puVar6,puVar3);
    puVar3 = puVar6;
    if (puVar5 != puVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100665bac);
      (*pcVar2)();
    }
  }
LAB_100665bc8:
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  lVar13 = *(long *)(puVar4 + 0x10);
  if (lVar13 == 0) {
    _swift_release(puVar4);
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
  }
  else {
    lVar14 = 0x20;
    FUN_100630c78();
    puVar6 = PTR___ss5UInt8VN_100995d40;
    do {
      local_80 = (undefined8 ****)CONCAT71(local_80._1_7_,puVar4[lVar14]);
      pppppuVar7 = &local_80;
      uVar9 = 0x10;
      __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(pppppuVar7,0x10,0,puVar6,puVar3);
      pppppuVar8 = pppppuVar7;
      __sSS5countSivg();
      if (pppppuVar8 == (undefined8 *****)0x1) {
        local_80 = (undefined8 *****)0x30;
        uStack_78 = 0xe100000000000000;
        __sSS6appendyySSF(pppppuVar7,uVar9);
        _swift_bridgeObjectRelease(uVar9);
        uVar9 = uStack_78;
        pppppuVar7 = (undefined8 *****)local_80;
      }
      __sSS6appendyySSF(pppppuVar7,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    _swift_release(puVar4);
  }
  auVar15._8_8_ = uStack_68;
  auVar15._0_8_ = local_70;
  return auVar15;
}

