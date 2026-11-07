// rea decompile_all
// name: FUN_10035d610
// address: 0x10035d610
// body: available
// range: 0x10035d610-0x10035d79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10035d610(void)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long unaff_x20;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [8];
  long local_68;
  long local_60 [3];
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar9 = _TtC10Filepicker16FilePickerConfig::environment;
  lVar8 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  _swift_beginAccess(unaff_x20 + _TtC10Filepicker16FilePickerConfig::environment,auStack_48,0,0);
  lVar2 = _TtC10Filepicker16FilePickerConfig::accessType;
  lVar9 = *(long *)(unaff_x20 + lVar9);
  if (lVar9 == 1) {
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker16FilePickerConfig::accessType,local_60,0,0);
    local_68 = *(long *)(unaff_x20 + lVar2);
    if (local_68 == 1) {
      pcVar10 = "cGZwLnBzLm5ldGVhc2UuY29t";
    }
    else {
      if (local_68 != 0) {
        puVar5 = &DAT_1009b4c70;
        lVar2 = -0x58;
        goto LAB_10035d794;
      }
      pcVar10 = "ZnAucHMubmV0ZWFzZS5jb20=";
    }
    puVar3 = &DAT_d000000000000018;
  }
  else {
    if (lVar9 != 0) {
      puVar5 = &DAT_1009b4c50;
      lVar2 = -0x50;
      local_60[0] = lVar9;
LAB_10035d794:
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (puVar5,&stack0xfffffffffffffff0 + lVar2,puVar5,PTR___sSiN_100995968);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10035d7a0);
      (*pcVar1)();
    }
    pcVar10 = "ZnAtZGV2LndlYmFwcC4xNjMuY29t";
    puVar3 = (undefined1 *)0xd00000000000001c;
  }
  uVar6 = (ulong)(pcVar10 + -0x20) | 0x8000000000000000;
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (puVar3,uVar6,0);
  if (uVar6 >> 0x3c < 0xf) {
    __sSS10FoundationE8EncodingV4utf8ACvgZ(auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0));
    puVar4 = puVar3;
    uVar7 = uVar6;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
              (puVar3,uVar6,auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0));
    FUN_100006cc8(puVar3,uVar6);
    if (uVar7 != 0) goto LAB_10035d74c;
  }
  _swift_bridgeObjectRelease(0);
  puVar4 = (undefined1 *)0x0;
  uVar7 = 0xe000000000000000;
LAB_10035d74c:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = puVar4;
  return auVar11;
}

