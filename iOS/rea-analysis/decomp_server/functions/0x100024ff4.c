// rea decompile_all
// name: FUN_100024ff4
// address: 0x100024ff4
// body: available
// range: 0x100024ff4-0x1000251df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100024ff4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_78;
  byte local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x6b);
  __sSS6appendyySSF(0x100000000000004d,0x800000010087bbb0);
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar1 = PTR___ss5Int32VN_100995c78;
  local_78 = (undefined4)param_2;
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  local_78 = (undefined4)((ulong)param_2 >> 0x20);
  puVar2 = puVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  local_78 = (undefined4)param_3;
  puVar2 = puVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x2a,0xe100000000000000);
  local_78 = (undefined4)((ulong)param_3 >> 0x20);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xd000000000000011,0x800000010087aab0);
  local_78 = (undefined4)((ulong)param_4 >> 0x20);
  local_74 = param_5 & 1;
  puVar1 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __sSS10describingSSx_tclufC(&local_78,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

