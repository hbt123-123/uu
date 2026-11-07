// rea decompile_all
// name: FUN_1000857a4
// address: 0x1000857a4
// body: available
// range: 0x1000857a4-0x100085963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000857a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  __ss11_StringGutsV4growyySiF(0x5f);
  __sSS6appendyySSF(0x1000000000000033,0x800000010087f330);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x70467475706e6920,0xea00000000003d73);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar3 = PTR___ss5Int32VN_100995c78;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x70467475706e6920,0xef3d746e756f4373);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x69726f7473657220,0xeb000000003d676e);
  bVar4 = *(char *)(param_5 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
          == '\0';
  uVar1 = 0x65757274;
  if (bVar4) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

