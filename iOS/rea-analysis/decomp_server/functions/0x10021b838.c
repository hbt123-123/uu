// rea decompile_all
// name: FUN_10021b838
// address: 0x10021b838
// body: available
// range: 0x10021b838-0x10021b98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021b838(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x4e);
  __sSS6appendyySSF(0x100000000000002d,0x80000001008a5740);
  uVar1 = 0xea00000000006465;
  if (*param_2 == '\0') {
    uVar1 = 0xea00000000007265;
  }
  __sSS6appendyySSF(0x6c6c6f72746e6f63,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x726f6d656d8cbcef,0xac0000003d424d79);
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(param_2 + 8),&local_40,PTR___ss26DefaultStringInterpolationVN_100995bf0
             ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x73657268748cbcef,0xaf3d424d646c6f68);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

