// rea decompile_all
// name: FUN_100407cf0
// address: 0x100407cf0
// body: available
// range: 0x100407cf0-0x100407ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100407cf0(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  void *macOut;
  size_t sVar6;
  size_t keyLength;
  void *pvVar7;
  void *pvVar8;
  long extraout_x8;
  long lVar9;
  code *pcVar10;
  size_t sVar11;
  undefined1 auVar12 [16];
  size_t local_90;
  void *local_88;
  size_t local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  local_78 = param_3;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  sVar11 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = param_4;
  uStack_68 = param_5;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(sVar11);
  FUN_10009ff0c();
  puVar1 = PTR___sSSN_1009957f8;
  sVar5 = sVar11;
  __sSy10FoundationE7cString5usingSays4Int8VGSgSSAAE8EncodingV_tF(sVar11,PTR___sSSN_1009957f8,lVar4)
  ;
  pcVar10 = *(code **)(lVar9 + 8);
  local_80 = sVar5;
  (*pcVar10)(sVar11,lVar3);
  local_70 = param_4;
  uStack_68 = param_5;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(sVar11);
  sVar5 = sVar11;
  __sSy10FoundationE13lengthOfBytes5usingSiSSAAE8EncodingV_tF(sVar11,puVar1,lVar4);
  local_90 = sVar5;
  (*pcVar10)(sVar11,lVar3);
  macOut = *(void **)(&DAT_100824bc0 + (long)param_1 * 8);
  local_88 = macOut;
  _swift_slowAlloc(macOut,0xffffffffffffffff);
  uVar2 = local_78;
  uStack_68 = local_78;
  local_70 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(sVar11);
  sVar6 = sVar11;
  __sSy10FoundationE7cString5usingSays4Int8VGSgSSAAE8EncodingV_tF(sVar11,puVar1,lVar4);
  (*pcVar10)(sVar11,lVar3);
  uStack_68 = uVar2;
  local_70 = param_2;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(sVar11);
  keyLength = sVar11;
  __sSy10FoundationE13lengthOfBytes5usingSiSSAAE8EncodingV_tF(sVar11,PTR___sSSN_1009957f8,lVar4);
  (*pcVar10)(sVar11,lVar3);
  sVar5 = local_80;
  if (sVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100407ee0);
    (*pcVar10)();
  }
  if (local_80 != 0) {
    _CCHmac(*(CCHmacAlgorithm *)(&DAT_100824bf0 + (long)param_1 * 4),(void *)(sVar6 + 0x20),
            keyLength,(void *)(local_80 + 0x20),local_90,macOut);
    _swift_bridgeObjectRelease(sVar6);
    _swift_bridgeObjectRelease(sVar5);
    pvVar7 = macOut;
    pvVar8 = local_88;
    FUN_100407ee4(macOut,local_88);
    _swift_slowDealloc(macOut,0xffffffffffffffff,0xffffffffffffffff);
    auVar12._8_8_ = pvVar8;
    auVar12._0_8_ = pvVar7;
    return auVar12;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100407ee4);
  (*pcVar10)();
}

