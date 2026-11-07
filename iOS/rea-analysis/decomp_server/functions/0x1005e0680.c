// rea decompile_all
// name: FUN_1005e0680
// address: 0x1005e0680
// body: available
// range: 0x1005e0680-0x1005e0857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005e0680(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 local_e0 [79];
  undefined1 local_91;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar3 = &DAT_100aae2b0;
  FUN_100004bb4(&DAT_100aae2b0,&DAT_100840470);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005e0f6c();
  puVar4 = &DAT_1009da090;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (local_e0 + -extraout_x8,&DAT_1009da090,&DAT_1009da090,param_1,uVar1,uVar2);
  local_e0[0] = *unaff_x20;
  local_90 = local_90 & 0xffffffffffffff00;
  FUN_1005e0fac();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (local_e0,&local_90,puVar3,&DAT_1009d9ef0,puVar4);
  if (unaff_x21 == 0) {
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x10);
    local_90 = *(ulong *)(unaff_x20 + 8);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
    local_80 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    local_70 = *(undefined8 *)(unaff_x20 + 0x28);
    local_60 = *(undefined8 *)(unaff_x20 + 0x38);
    local_91 = 1;
    puVar5 = unaff_x20;
    FUN_1005e0fec();
    FUN_1005e1020();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_90,&local_91,puVar3,&DAT_1009d9f68,puVar5);
    uVar2 = local_70;
    uVar1 = local_80;
    _swift_bridgeObjectRelease(local_60);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar1);
    local_e0[0] = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
              (*(undefined8 *)(unaff_x20 + 0x40),local_e0,puVar3);
    local_e0[0] = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(unaff_x20[0x48],local_e0,puVar3);
  }
  (**(code **)(lVar6 + 8))(local_e0 + -extraout_x8,puVar3);
  return;
}

