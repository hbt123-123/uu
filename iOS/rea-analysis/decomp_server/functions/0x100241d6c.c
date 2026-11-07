// rea decompile_all
// name: FUN_100241d6c
// address: 0x100241d6c
// body: available
// range: 0x100241d6c-0x100241f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100241d6c(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long extraout_x8;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_1,param_2,0);
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_2 >> 0x20);
    uVar8 = uVar1 >> 0x1e;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar1 >> 0x1e < 2) {
      if (uVar8 == 0) {
        puVar10 = (undefined *)(param_2 >> 0x30 & 0xff);
      }
      else {
        iVar9 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar9,(int)param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100241f2c);
          (*pcVar2)();
        }
        puVar10 = (undefined *)(long)(iVar9 - (int)param_1);
LAB_100241e18:
        if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100241f28);
          (*pcVar2)();
        }
      }
      if (puVar10 != (undefined *)0x0) {
        puVar4 = puVar10;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar10,PTR___ss5UInt8VN_100995d40);
        *(undefined **)(puVar4 + 0x10) = puVar10;
        _bzero(puVar4 + 0x20,(size_t)puVar10);
      }
    }
    else if (uVar8 == 2) {
      puVar10 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100241e08);
        (*pcVar2)();
      }
      goto LAB_100241e18;
    }
    uVar11 = *(undefined8 *)(puVar4 + 0x10);
    _swift_bridgeObjectRetain(puVar4);
    __s10Foundation4DataV9copyBytes2to5countySpys5UInt8VG_SitF(puVar4 + 0x20,uVar11,param_1,param_2)
    ;
    FUN_100006cc8(param_1,param_2);
    _swift_bridgeObjectRelease(puVar4);
    puVar5 = puVar4;
    FUN_100241bf8();
    _swift_bridgeObjectRelease(puVar4);
    puVar4 = puVar5 + 0x20;
    puVar10 = puVar4 + *(long *)(puVar5 + 0x10);
    FUN_1001f8534();
    __sSS10FoundationE8EncodingV4utf8ACvgZ
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    puVar6 = puVar4;
    puVar7 = puVar10;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
              (puVar4,puVar10,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
    ;
    FUN_100006cdc(puVar4,puVar10);
    _swift_bridgeObjectRelease(puVar5);
    if (puVar7 != (undefined *)0x0) goto LAB_100241f0c;
  }
  puVar6 = (undefined *)0x0;
  puVar7 = (undefined *)0x0;
LAB_100241f0c:
  auVar12._8_8_ = puVar7;
  auVar12._0_8_ = puVar6;
  return auVar12;
}

