// rea decompile_all
// name: FUN_1003c48fc
// address: 0x1003c48fc
// body: available
// range: 0x1003c48fc-0x1003c4ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c48fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar4 = &DAT_100a8c8c0;
  FUN_100004bb4(&DAT_100a8c8c0,&DAT_100822858);
  lVar8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar6);
  FUN_1003d1c5c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&DAT_1009b98d0,&DAT_1009b98d0,param_1,uVar6,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_51,puVar4);
  if (unaff_x21 == 0) {
    lVar5 = 0;
    FUN_1003d0d4c();
    iVar3 = *(int *)(lVar5 + 0x14);
    local_52 = 1;
    uVar6 = 0;
    __s10Foundation4DateVMa(0);
    puVar7 = &DAT_100a78030;
    FUN_100005c90(&DAT_100a78030,PTR___s10Foundation4DateVMa_100996208,
                  PTR___s10Foundation4DateVSEAAMc_100996218);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              ((long)unaff_x20 + (long)iVar3,&local_52,puVar4,uVar6,puVar7);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x18));
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*puVar1,puVar1[1],&local_53,puVar4);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x1c));
    local_54 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*puVar1,puVar1[1],&local_54,puVar4);
  }
  (**(code **)(lVar8 + 8))(auStack_60 + -extraout_x8,puVar4);
  return;
}

