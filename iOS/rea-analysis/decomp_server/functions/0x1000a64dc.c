// rea decompile_all
// name: FUN_1000a64dc
// address: 0x1000a64dc
// body: available
// range: 0x1000a64dc-0x1000a673f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a64dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  char *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  local_80 = 0;
  uStack_78 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x75);
  __sSS6appendyySSF(0x100000000000004b,0x8000000100880f40);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0xa0e6ae9be78cbcef,0xad00003db095e687);
  local_88 = *(undefined8 *)(param_4 + 0x10);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x8ae59088e68cbcef,0xaa00000000003d9f);
  uVar5 = 0x65757274;
  if (*param_5 == '\0') {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (*param_5 == '\0') {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar5,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x97e69780e88cbcef,0xaa00000000003db6);
  puVar4 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  uVar5 = 1;
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  __s10Foundation4DateVACycfC(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV17timeIntervalSinceySdACF(param_6);
  (**(code **)(lVar6 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  puVar2 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar4 + 0x38) = PTR___sSdN_1009958f0;
  *(undefined **)(puVar4 + 0x40) = puVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  uVar5 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __sSS6appendyySSF(0x73,0xe100000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_80;
  param_1[1] = uStack_78;
  return;
}

