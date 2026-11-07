// rea decompile_all
// name: FUN_100093a14
// address: 0x100093a14
// body: available
// range: 0x100093a14-0x100093b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093a14(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x27);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0xd00000000000002f;
  local_68 = 0x800000010087ff60;
  puVar3 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  uVar4 = 1;
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  __s10Foundation4DateVACycfC(lVar5);
  __s10Foundation4DateV17timeIntervalSinceySdACF(param_2);
  (**(code **)(lVar6 + 8))(lVar5,lVar2);
  puVar1 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar3 + 0x38) = PTR___sSdN_1009958f0;
  *(undefined **)(puVar3 + 0x40) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  uVar4 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66322e25,0xe400000000000000,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x73,0xe100000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = local_68;
  return;
}

