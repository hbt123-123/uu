// rea decompile_all
// name: FUN_10034a6d4
// address: 0x10034a6d4
// body: available
// range: 0x10034a6d4-0x10034a9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034a7a8) */

undefined * FUN_10034a6d4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong local_90;
  undefined *local_88;
  undefined *local_80;
  ulong local_78;
  long local_70;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar4 + -8);
  lVar6 = (long)&local_90 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100a833d8;
  FUN_100004bb4(&DAT_100a833d8,&DAT_1008178b0);
  _swift_initStaticObject();
  puVar5 = puVar10;
  FUN_10034c1c0();
  _swift_arrayDestroy(puVar10 + 0x20,6,PTR___sSSN_1009957f8);
  uVar15 = *(ulong *)(puVar5 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar15 != 0) {
    uVar12 = 0;
    local_88 = puVar5 + 0x28;
    local_90 = uVar15 - 1;
    local_78 = uVar15;
    local_70 = lVar6;
    do {
      puVar14 = (undefined8 *)(local_88 + uVar12 * 0x10);
      uVar15 = uVar12;
      local_80 = puVar10;
      while( true ) {
        if (*(ulong *)(puVar5 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034a9a8);
          (*pcVar3)();
        }
        uVar11 = puVar14[-1];
        uVar2 = *puVar14;
        _swift_bridgeObjectRetain(uVar2);
        __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar6,uVar11,uVar2);
        uVar11 = 0;
        lVar7 = lVar6;
        __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(lVar6,0);
        (**(code **)(lVar16 + 8))(lVar6,lVar4);
        lVar6 = lVar7;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar7,uVar11);
        FUN_100006cdc(lVar7,uVar11);
        lVar7 = 0;
        _SecCertificateCreateWithData(0,lVar6);
        _swift_bridgeObjectRelease(uVar2);
        puVar10 = local_80;
        if (lVar7 != 0) break;
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 2;
        lVar6 = local_70;
        if (local_78 == uVar15) goto LAB_10034a978;
      }
      puVar8 = local_80;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if (((((ulong)puVar8 & 1) == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)
         ) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((long)puVar10 < 0) {
            puVar8 = puVar10;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar8);
        }
        puVar9 = (undefined *)0x0;
        FUN_100297024(0,puVar8 + 1,1,puVar10);
        puVar10 = puVar9;
      }
      lVar6 = local_70;
      uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar13 + 0x10);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_100297024(puVar10,uVar1 + 1,1);
        uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      uVar12 = uVar15 + 1;
      *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
      *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar7;
    } while (local_90 != uVar15);
  }
LAB_10034a978:
  _swift_bridgeObjectRelease(puVar5);
  return puVar10;
}

