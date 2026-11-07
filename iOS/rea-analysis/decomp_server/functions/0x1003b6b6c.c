// rea decompile_all
// name: FUN_1003b6b6c
// address: 0x1003b6b6c
// body: available
// range: 0x1003b6b6c-0x1003b6cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b6b6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [15];
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = &DAT_100a8bdd8;
  FUN_100004bb4(&DAT_100a8bdd8,&DAT_100820b88);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003b9be0();
  puVar4 = &DAT_1009b8bb8;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&DAT_1009b8bb8,&DAT_1009b8bb8,param_1,uVar1,uVar2);
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  local_71 = 0;
  FUN_1003b9c20();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_70,&local_71,puVar3,&DAT_1009b8868,puVar4);
  if (unaff_x21 == 0) {
    uStack_68 = unaff_x20[5];
    local_70 = unaff_x20[4];
    uStack_58 = unaff_x20[7];
    uStack_60 = unaff_x20[6];
    local_71 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_70,&local_71,puVar3,&DAT_1009b8868,puVar4);
    uStack_68 = unaff_x20[9];
    local_70 = unaff_x20[8];
    uStack_58 = unaff_x20[0xb];
    uStack_60 = unaff_x20[10];
    local_71 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_70,&local_71,puVar3,&DAT_1009b8868,puVar4);
    (**(code **)(lVar6 + 8))(puVar5,puVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,puVar3);
  }
  return;
}

