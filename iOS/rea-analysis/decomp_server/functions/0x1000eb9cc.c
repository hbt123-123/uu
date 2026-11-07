// rea decompile_all
// name: FUN_1000eb9cc
// address: 0x1000eb9cc
// body: available
// range: 0x1000eb9cc-0x1000ebc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000ebb90) */
/* WARNING: Removing unreachable block (ram,0x0001000ebb0c) */

void FUN_1000eb9cc(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  ulong local_58;
  
  puVar3 = &DAT_100a78018;
  FUN_100004bb4(&DAT_100a78018,&DAT_10080d088);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar7);
  FUN_1000ec6dc();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar9,&DAT_10099c378,&DAT_10099c378,param_1,uVar7,uVar1);
  local_58 = local_58 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_58,puVar3);
  if (unaff_x21 == 0) {
    local_58._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_58,puVar3)
    ;
    local_58 = CONCAT71(local_58._1_7_,2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[4],unaff_x20[5],&local_58,puVar3)
    ;
    local_58 = unaff_x20[6];
    local_61 = 3;
    puVar4 = &DAT_100a77ff0;
    FUN_100004bb4(&DAT_100a77ff0,&DAT_10080d080);
    puVar5 = &DAT_100a78020;
    FUN_1000ec7e0(&DAT_100a78020,FUN_1000ec850,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_58,&local_61,puVar3,puVar4,puVar5);
    lVar6 = 0;
    FUN_1000eb43c();
    iVar2 = *(int *)(lVar6 + 0x20);
    local_58._0_1_ = 4;
    uVar7 = 0;
    __s10Foundation4DateVMa(0);
    puVar4 = &DAT_100a78030;
    FUN_1000ec890(&DAT_100a78030,PTR___s10Foundation4DateVSEAAMc_100996218);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              ((long)unaff_x20 + (long)iVar2,&local_58,puVar3,uVar7,puVar4);
    local_58._0_1_ = 5;
    lVar8 = (long)unaff_x20 + (long)*(int *)(lVar6 + 0x24);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (lVar8,&local_58,puVar3,uVar7,puVar4);
    local_58 = CONCAT71(local_58._1_7_,
                        *(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x28)));
    local_61 = 6;
    FUN_1000ec8d0();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_58,&local_61,puVar3,&DAT_10099c408,lVar8);
    (**(code **)(lVar10 + 8))(puVar9,puVar3);
  }
  else {
    (**(code **)(lVar10 + 8))(puVar9,puVar3);
  }
  return;
}

