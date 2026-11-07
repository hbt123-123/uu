// rea decompile_all
// name: FUN_100007b20
// address: 0x100007b20
// body: available
// range: 0x100007b20-0x100007d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100007b20(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  local_98 = *(undefined8 *)(param_2 + 0x10);
  local_a0 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = 0xff;
  FUN_100010c98(0xff,local_98,*(undefined8 *)(param_2 + 0x18));
  pTVar3 = &TargetProtocolConformanceDescriptor_1000cee40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000cee40,uVar2);
  lVar4 = 0;
  __ss22KeyedEncodingContainerVMa(0,uVar2,pTVar3);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar5);
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_a0 - extraout_x8,uVar2,uVar2,pTVar3,uVar5,uVar1);
  uVar5 = *unaff_x20;
  local_80 = local_80 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar5,unaff_x20[1],&local_80,lVar4);
  uVar2 = local_98;
  uVar1 = local_a0;
  if (unaff_x21 == 0) {
    uStack_78 = unaff_x20[3];
    local_80 = unaff_x20[2];
    uStack_68 = unaff_x20[5];
    uStack_70 = unaff_x20[4];
    local_51 = 1;
    FUN_1000108b4();
    FUN_100001eb8(&local_80,&local_51,lVar4,&DAT_1000f10a8,uVar5);
    local_80 = unaff_x20[6];
    local_51 = 2;
    uVar5 = 0;
    __sSaMa(0,uVar2);
    local_88 = uVar1;
    puVar6 = PTR___sSayxGSEsSERzlMc_1000f0370;
    _swift_getWitnessTable(PTR___sSayxGSEsSERzlMc_1000f0370,uVar5,&local_88);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_80,&local_51,lVar4,uVar5,puVar6);
    local_80._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[7],&local_80,lVar4);
    local_80 = CONCAT71(local_80._1_7_,4);
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + 8),&local_80,lVar4);
  }
  (**(code **)(lVar7 + 8))((long)&local_a0 - extraout_x8,lVar4);
  return;
}

