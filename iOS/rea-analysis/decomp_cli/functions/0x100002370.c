// rea decompile_all
// name: FUN_100002370
// address: 0x100002370
// body: available
// range: 0x100002370-0x100002567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100002370(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  undefined1 local_51;
  
  uStack_a8 = *(undefined8 *)(param_2 + 0x10);
  local_b0 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = 0xff;
  FUN_10000eb94(0xff,uStack_a8,*(undefined8 *)(param_2 + 0x18));
  pTVar5 = &TargetProtocolConformanceDescriptor_1000cf2a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000cf2a0,uVar4);
  lVar6 = 0;
  __ss22KeyedEncodingContainerVMa(0,uVar4,pTVar5);
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar8);
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_b0 - extraout_x8,uVar4,uVar4,pTVar5,uVar8,uVar2);
  local_90 = local_90 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(*unaff_x20,&local_90,lVar6);
  if (unaff_x21 == 0) {
    local_90 = CONCAT71(local_90._1_7_,1);
    puVar7 = unaff_x20 + *(int *)(param_2 + 0x2c);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (puVar7,&local_90,lVar6,uStack_a8,local_b0);
    puVar1 = (ulong *)(unaff_x20 + *(int *)(param_2 + 0x30));
    local_70 = puVar1[4];
    uStack_88 = puVar1[1];
    local_90 = *puVar1;
    uStack_78 = puVar1[3];
    uStack_80 = puVar1[2];
    local_51 = 2;
    FUN_10000ebc4();
    FUN_100001eb8(&local_90,&local_51,lVar6,&DAT_1000f0c90,puVar7);
    iVar3 = *(int *)(param_2 + 0x34);
    local_90 = CONCAT71(local_90._1_7_,3);
    uVar8 = 0;
    __s10Foundation4DateVMa(0);
    puVar9 = &DAT_100101a98;
    FUN_10000ec04(&DAT_100101a98,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSEAAMc_1000f07e0);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (unaff_x20 + iVar3,&local_90,lVar6,uVar8,puVar9);
  }
  (**(code **)(lVar10 + 8))((long)&local_b0 - extraout_x8,lVar6);
  return;
}

