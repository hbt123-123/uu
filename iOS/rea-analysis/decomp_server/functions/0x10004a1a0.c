// rea decompile_all
// name: FUN_10004a1a0
// address: 0x10004a1a0
// body: available
// range: 0x10004a1a0-0x10004a5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004a1a0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_51;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xb4);
  __sSS6appendyySSF(&DAT_d000000000000030,0x800000010087d4f0);
  lVar8 = *param_2;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_70 = lVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x7469746e65646920,0xee003a746f6c5379);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar5 = PTR___sSiN_100995968;
  local_51 = (char)param_2[9];
  if ((local_51 == '\x01') && (bVar4 = SCARRY8(lVar8,1000), lVar8 = lVar8 + 1000, bVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10004a5a8);
    (*pcVar3)();
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_70 = lVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0xd000000000000011,0x800000010087d530);
  local_70 = CONCAT71(local_70._1_7_,local_51);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_68,&DAT_100997ea8,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xd000000000000014,0x800000010087d550);
  local_70 = param_2[8];
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a656d616e20,0xe600000000000000);
  __sSS6appendyySSF(param_2[1],param_2[2]);
  __sSS6appendyySSF(0x3a65646f6d20,0xe600000000000000);
  local_70 = param_2[3];
  lVar8 = param_2[4];
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x78,0xe100000000000000);
  puVar6 = puVar7;
  local_70 = lVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a495044696820,0xe700000000000000);
  bVar4 = (*(byte *)(param_2 + 7) & 1) == 0;
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
  __sSS6appendyySSF(0x6873657266657220,0xed00003a65746152);
  local_70 = param_2[6];
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6f437365646f6d20,0xec0000003a746e75);
  local_70 = *(long *)(param_2[5] + 0x10);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6578695078616d20,0xeb000000003a736c);
  local_70 = 0x2000;
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x78,0xe100000000000000);
  local_70 = 0x1400;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_68;
  param_1[1] = uStack_60;
  return;
}

