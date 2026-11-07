// rea decompile_all
// name: FUN_1000265c0
// address: 0x1000265c0
// body: available
// range: 0x1000265c0-0x1000268d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000265c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x74);
  __sSS6appendyySSF(0x1000000000000016,0x8000000100877bf0);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x203a48572d2d,0xe600000000000000);
  puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x202a20,0xe300000000000000);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a485778695020,0xe700000000000000);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x202a20,0xe300000000000000);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x736572666572200a,0xef203a6574615268);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar6 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(param_3 + 0x18),&local_60,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x754e65646f6d200a,0xee00203a7265626d);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x7469736e6564200a,0xeb00000000203a79);
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(param_3 + 0x20),&local_60,puVar6,puVar3);
  __sSS6appendyySSF(0xd000000000000011,0x8000000100877c10);
  bVar5 = (*(byte *)(param_3 + 0x28) & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar5) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

