// rea decompile_all
// name: FUN_1000ee3d8
// address: 0x1000ee3d8
// body: available
// range: 0x1000ee3d8-0x1000ee91f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000ee5a4) */
/* WARNING: Removing unreachable block (ram,0x0001000ee5ac) */
/* WARNING: Removing unreachable block (ram,0x0001000ee5f0) */
/* WARNING: Removing unreachable block (ram,0x0001000ee7fc) */

void FUN_1000ee3d8(undefined1 *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  ID IVar8;
  undefined1 *puVar9;
  undefined1 auStack_d0 [16];
  ulong auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined1 *local_80;
  ulong local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __ss13DecodingErrorOMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar9 = auStack_b0 +
           (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
           (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar2 = param_2;
  FUN_1000d761c(param_2,param_3);
  if ((uVar2 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)(puVar9 + -0x10) = param_2;
    *(undefined8 *)(puVar9 + -8) = param_3;
    FUN_1003fb4ec(FUN_1000ef5d8,puVar9 + -0x20,0xd0000000000000a9,0x80000001008887a0,
                  0xd000000000000019,0x8000000100888940,0x5d,0);
    *param_1 = 0;
    puVar5 = &DAT_100a77cf0;
    FUN_100004bb4(&DAT_100a77cf0,&DAT_10080d400);
  }
  else {
    local_90 = lVar7;
    lStack_88 = lVar1;
    local_80 = param_1;
    local_70 = param_2;
    uStack_68 = param_3;
    _swift_bridgeObjectRetain(param_3);
    __sSS6appendyySSF(0x6e6f736a2e,0xe500000000000000);
    uVar4 = uStack_68;
    uVar6 = uStack_68;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(puVar9,local_70,uStack_68,0)
    ;
    _swift_bridgeObjectRelease(uVar4);
    IVar8 = *(ID *)(unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::fileManager);
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar6);
    IVar8 = _objc_msgSend(IVar8,"fileExistsAtPath:",uVar4);
    if ((int)IVar8 != 0) {
      uVar6 = 0;
      puVar3 = puVar9;
      __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
      local_a8 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::decoder)
      ;
      uVar4 = 0;
      FUN_1000eb43c(0);
      puVar5 = &DAT_100a78190;
      FUN_100005c90(&DAT_100a78190,FUN_1000eb43c,&TargetProtocolConformanceDescriptor_10080d050);
      local_a0 = puVar3;
      uStack_98 = uVar6;
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (local_80,uVar4,puVar3,uVar6,uVar4,puVar5);
      (**(code **)(local_90 + 8))(puVar9,lStack_88);
      FUN_100006cdc(local_a0,uStack_98);
      puVar5 = &DAT_100a77cf0;
      FUN_100004bb4(&DAT_100a77cf0,&DAT_10080d400);
      uVar4 = 0;
      param_1 = local_80;
      goto LAB_1000ee8c0;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)(puVar9 + -0x10) = param_2;
    *(undefined8 *)(puVar9 + -8) = param_3;
    FUN_1003fb4ec(FUN_1000ef5e0,puVar9 + -0x20,0xd0000000000000a9,0x80000001008887a0,
                  0xd000000000000019,0x8000000100888940,99,0);
    (**(code **)(local_90 + 8))(puVar9,lStack_88);
    param_1 = local_80;
    *local_80 = 1;
    puVar5 = &DAT_100a77cf0;
    FUN_100004bb4(&DAT_100a77cf0,&DAT_10080d400);
  }
  uVar4 = 1;
LAB_1000ee8c0:
  _swift_storeEnumTagMultiPayload(param_1,puVar5,uVar4);
  return;
}

