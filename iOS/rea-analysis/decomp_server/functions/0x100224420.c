// rea decompile_all
// name: FUN_100224420
// address: 0x100224420
// body: available
// range: 0x100224420-0x100224697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100224420(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ID self;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  long extraout_x8;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined *local_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar13);
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,lVar13);
  if (param_2 != 0) {
    self = 0;
    FUN_100241b14();
    _objc_allocWithZone();
    _objc_msgSend(self,"init");
    uVar8 = param_2;
    __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
              (param_1,param_2,0);
    _swift_bridgeObjectRelease(param_2);
    if (uVar8 >> 0x3c < 0xf) {
      uVar1 = (uint)(uVar8 >> 0x20);
      uVar11 = uVar1 >> 0x1e;
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar1 >> 0x1e < 2) {
        if (uVar11 == 0) {
          puVar14 = (undefined *)(uVar8 >> 0x30 & 0xff);
        }
        else {
          iVar12 = (int)((ulong)param_1 >> 0x20);
          if (SBORROW4(iVar12,(int)param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100224698);
            (*pcVar2)();
          }
          puVar14 = (undefined *)(long)(iVar12 - (int)param_1);
LAB_100224538:
          if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100224694);
            (*pcVar2)();
          }
        }
        if (puVar14 != (undefined *)0x0) {
          puVar4 = puVar14;
          __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                    (puVar14,PTR___ss5UInt8VN_100995d40);
          *(undefined **)(puVar4 + 0x10) = puVar14;
          _bzero(puVar4 + 0x20,(size_t)puVar14);
        }
      }
      else if (uVar11 == 2) {
        puVar14 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100224528);
          (*pcVar2)();
        }
        goto LAB_100224538;
      }
      uVar15 = *(undefined8 *)(puVar4 + 0x10);
      _swift_bridgeObjectRetain(puVar4);
      __s10Foundation4DataV9copyBytes2to5countySpys5UInt8VG_SitF(puVar4 + 0x20,uVar15,param_1,uVar8)
      ;
      FUN_100006cc8(param_1,uVar8);
      _swift_bridgeObjectRelease(puVar4);
      puVar5 = puVar4;
      FUN_100241bf8();
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = puVar5 + 0x20;
      puVar14 = puVar4 + *(long *)(puVar5 + 0x10);
      FUN_1001f8534();
      __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar13);
      puVar6 = puVar4;
      puVar9 = puVar14;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar4,puVar14,lVar13);
      FUN_100006cdc(puVar4,puVar14);
      _swift_bridgeObjectRelease(puVar5);
      uVar15 = 0;
      if (puVar9 != (undefined *)0x0) {
        local_70 = puVar6;
        puStack_68 = puVar9;
        __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar13,0);
        FUN_10021e96c();
        uVar10 = 0;
        lVar7 = lVar13;
        __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                  (lVar13,0,PTR___sSSN_1009957f8,uVar15);
        (**(code **)(lVar16 + 8))(lVar13,lVar3);
        _swift_bridgeObjectRelease(puVar9);
        goto LAB_100224670;
      }
    }
  }
  lVar7 = 0;
  uVar10 = 0xf000000000000000;
LAB_100224670:
  auVar17._8_8_ = uVar10;
  auVar17._0_8_ = lVar7;
  return auVar17;
}

