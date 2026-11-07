// rea decompile_all
// name: thunk_FUN_100403ec0
// address: 0x100404190
// body: available
// range: 0x100404190-0x100404193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100403ec0(undefined8 *param_1)

{
  undefined *puVar1;
  mode_t mVar2;
  mode_t mVar3;
  pid_t pVar4;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uVar5;
  
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x54);
  __sSS6appendyySSF(0xd000000000000020,0x80000001008b6290);
  uStack_70._0_4_ = _getpid();
  puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar1 = PTR___ss5Int32VN_100995c78;
  puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x3d6469707020,0xe600000000000000);
  uStack_70._0_4_ = _getppid();
  puVar7 = puVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x3d64697520,0xe500000000000000);
  uStack_70._0_4_ = _getuid();
  puVar9 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar7 = PTR___ss6UInt32VN_100995dc0;
  puVar8 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x3d6469756520,0xe600000000000000);
  uStack_70._0_4_ = _geteuid();
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar7,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x3d64697320,0xe500000000000000);
  pVar4 = _getpid();
  pVar4 = _getsid(pVar4);
  uStack_70 = CONCAT44(uStack_70._4_4_,pVar4);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x3d6b73616d7520,0xe700000000000000);
  mVar2 = _umask(0x12);
  mVar3 = _umask(mVar2);
  uVar5 = (ulong)mVar3;
  uStack_70 = CONCAT62(uStack_70._2_6_,mVar2);
  FUN_10040613c();
  uVar11 = 8;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&uStack_70,8,0,PTR___ss6UInt16VN_100995d90,uVar5);
  uStack_70 = 0x6f30;
  uStack_68 = 0xe200000000000000;
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar11);
  uVar11 = uStack_68;
  __sSS6appendyySSF(uStack_70,uStack_68);
  _swift_bridgeObjectRelease(uVar11);
  uVar12 = 0xe90000000000003d;
  __sSS6appendyySSF(0x68746150676f6c20,0xe90000000000003d);
  uVar6 = 0;
  FUN_100401b14(0);
  FUN_1003fbb00();
  uVar11 = uVar12;
  FUN_100404dd4();
  _swift_bridgeObjectRelease(uVar12);
  __sSS6appendyySSF(uVar6,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = uStack_60;
  param_1[1] = uStack_58;
  return;
}

