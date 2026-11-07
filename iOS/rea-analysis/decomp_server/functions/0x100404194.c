// rea decompile_all
// name: FUN_100404194
// address: 0x100404194
// body: available
// range: 0x100404194-0x1004044ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100404194(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  __s10Foundation8TimeZoneVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation6LocaleVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = 0;
  uStack_78 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x5f);
  uVar7 = 0x80000001008b6260;
  __sSS6appendyySSF(0xd000000000000021,0x80000001008b6260);
  FUN_100221e60();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = 0xed00003d646c6975;
  __sSS6appendyySSF(0x426e697772616420,0xed00003d646c6975);
  FUN_1003d9b04();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x656e696863616d20,0xe90000000000003d);
  uVar7 = 0xe800000000000000;
  FUN_100404f74(0x6c65646f6d2e7768,0xe800000000000000);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x4779726f6d656d20,0xea00000000003d42);
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  IVar5 = NSProcessInfo::physicalMemory(IVar5,"physicalMemory");
  puVar6 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  puVar1 = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar2 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar6 + 0x38) = puVar1;
  *(undefined **)(puVar6 + 0x40) = puVar2;
  *(double *)(puVar6 + 0x20) = (double)IVar5 / 1073741824.0;
  uVar7 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66312e25,0xe400000000000000,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = 0x3d656c61636f6c20;
  uVar8 = 0xe800000000000000;
  __sSS6appendyySSF(0x3d656c61636f6c20,0xe800000000000000);
  __s10Foundation6LocaleV7currentACvgZ(lVar10);
  __s10Foundation6LocaleV10identifierSSvg();
  (**(code **)(lVar12 + 8))(lVar10,lVar4);
  __sSS6appendyySSF(uVar7,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = 0x6e6f7a656d697420;
  uVar7 = 0xea00000000003d65;
  __sSS6appendyySSF(0x6e6f7a656d697420,0xea00000000003d65);
  __s10Foundation8TimeZoneV7currentACvgZ(lVar9);
  __s10Foundation8TimeZoneV10identifierSSvg();
  (**(code **)(lVar11 + 8))(lVar9,lVar3);
  __sSS6appendyySSF(uVar8,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_80;
  param_1[1] = uStack_78;
  return;
}

