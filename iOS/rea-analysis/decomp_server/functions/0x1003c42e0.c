// rea decompile_all
// name: FUN_1003c42e0
// address: 0x1003c42e0
// body: available
// range: 0x1003c42e0-0x1003c4463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c42e0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8c788;
  FUN_100004bb4(&DAT_100a8c788,&DAT_1008224f0);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar5);
  FUN_1003d0db0();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&DAT_1009b97b0,&DAT_1009b97b0,param_1,uVar5,uVar1);
  local_51 = 0;
  __s10Foundation3URLVMa(0);
  FUN_100005c90(&DAT_100a8c790,PTR___s10Foundation3URLVMa_100996188,
                PTR___s10Foundation3URLVSEAAMc_100996198);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF();
  if (unaff_x21 == 0) {
    lVar4 = 0;
    FUN_1003c63e0();
    iVar2 = *(int *)(lVar4 + 0x14);
    local_52 = 1;
    uVar5 = 0;
    __s10Foundation4DateVMa(0);
    puVar6 = &DAT_100a78030;
    FUN_100005c90(&DAT_100a78030,PTR___s10Foundation4DateVMa_100996208,
                  PTR___s10Foundation4DateVSEAAMc_100996218);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (unaff_x20 + iVar2,&local_52,puVar3,uVar5,puVar6);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar3);
  return;
}

