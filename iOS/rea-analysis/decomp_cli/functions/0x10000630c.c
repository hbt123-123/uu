// rea decompile_all
// name: FUN_10000630c
// address: 0x10000630c
// body: available
// range: 0x10000630c-0x100006533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100006444) */

void FUN_10000630c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [10];
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100101b60;
  FUN_10000eb08(&DAT_100101b60,&DAT_1000cb738);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar3);
  FUN_100010170();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&DAT_1000f2b00,&DAT_1000f2b00,param_1,uVar3,uVar1);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_52,puVar2)
    ;
    uVar3 = unaff_x20[4];
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar3,unaff_x20[5],&local_53,puVar2);
    local_54 = *(undefined1 *)(unaff_x20 + 6);
    local_55 = 3;
    FUN_1000101b0();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_54,&local_55,puVar2,&DAT_1000f0fa8,uVar3);
    local_56 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)((long)unaff_x20 + 0x31),&local_56,puVar2);
    lVar4 = 0;
    FUN_100010114();
    FUN_100001b88((long)unaff_x20 + (long)*(int *)(lVar4 + 0x24),5,&DAT_100101b60,&DAT_1000cb738);
    FUN_100001d24((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28),6,&DAT_100101b60,&DAT_1000cb738);
    (**(code **)(lVar6 + 8))(puVar5,puVar2);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,puVar2);
  }
  return;
}

