// rea decompile_all
// name: FUN_10034b25c
// address: 0x10034b25c
// body: available
// range: 0x10034b25c-0x10034b577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034b348) */

void FUN_10034b25c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong local_a0;
  undefined *local_98;
  ID local_90;
  undefined *local_80;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar4 + -8);
  lVar18 = (long)&local_a0 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  puVar10 = &DAT_100a833d8;
  FUN_100004bb4(&DAT_100a833d8,&DAT_1008178b0);
  _swift_initStaticObject();
  puVar6 = puVar10;
  FUN_10034bfb0();
  _swift_arrayDestroy(puVar10 + 0x20,6,PTR___sSSN_1009957f8);
  uVar16 = *(ulong *)(puVar6 + 0x10);
  if (uVar16 == 0) {
    local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar12 = 0;
    local_98 = puVar6 + 0x28;
    local_a0 = uVar16 - 1;
    local_80 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_90 = IVar5;
    do {
      puVar14 = (undefined8 *)(local_98 + uVar12 * 0x10);
      uVar15 = uVar12;
      while( true ) {
        if (*(ulong *)(puVar6 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034b578);
          (*pcVar3)();
        }
        uVar11 = puVar14[-1];
        uVar2 = *puVar14;
        _swift_bridgeObjectRetain(uVar2);
        __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar18,uVar11,uVar2);
        uVar11 = 0;
        lVar8 = lVar18;
        __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(lVar18,0);
        (**(code **)(lVar17 + 8))(lVar18,lVar4);
        lVar7 = lVar8;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar8,uVar11);
        FUN_100006cdc(lVar8,uVar11);
        lVar8 = 0;
        _SecCertificateCreateWithData(0,lVar7);
        _swift_bridgeObjectRelease(uVar2);
        if (lVar8 != 0) break;
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 2;
        if (uVar16 == uVar15) goto LAB_10034b51c;
      }
      puVar10 = local_80;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if (((((ulong)puVar10 & 1) == 0) || ((long)local_80 < 0)) ||
         (((ulong)local_80 >> 0x3e & 1) != 0)) {
        if ((ulong)local_80 >> 0x3e == 0) {
          puVar10 = *(undefined **)(((ulong)local_80 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar10 = (undefined *)((ulong)local_80 & 0xffffffffffffff8);
          if ((long)local_80 < 0) {
            puVar10 = local_80;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar10);
        }
        puVar9 = (undefined *)0x0;
        FUN_100297024(0,puVar10 + 1,1,local_80);
        local_80 = puVar9;
      }
      uVar13 = (ulong)local_80 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar13 + 0x10);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_100297024(puVar10,uVar1 + 1,1,local_80);
        uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
        local_80 = puVar10;
      }
      uVar12 = uVar15 + 1;
      *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
      *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar8;
    } while (local_a0 != uVar15);
  }
LAB_10034b51c:
  _swift_bridgeObjectRelease(puVar6);
  _swift_allocObject(unaff_x20,0x1b,7);
  *(undefined **)(unaff_x20 + 0x10) = local_80;
  *(undefined2 *)(unaff_x20 + 0x18) = 0x100;
  *(undefined1 *)(unaff_x20 + 0x1a) = 1;
  return;
}

