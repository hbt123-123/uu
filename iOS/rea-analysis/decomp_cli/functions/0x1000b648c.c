// rea decompile_all
// name: FUN_1000b648c
// address: 0x1000b648c
// body: available
// range: 0x1000b648c-0x1000b672f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000b66b0) */

void FUN_1000b648c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  undefined8 local_58;
  
  puVar3 = &DAT_100105190;
  FUN_10000eb08(&DAT_100105190,&BYTE_1000d6e40);
  lVar7 = *(long *)(puVar3 + -8);
  puVar6 = auStack_60 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_1000bbd34();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1000fc010,&DAT_1000fc010,param_1,uVar1,uVar2);
  local_58 = *unaff_x20;
  local_59 = 0;
  puVar4 = &DAT_100105198;
  FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
  puVar5 = &DAT_1001051a0;
  FUN_1000c02c8(&DAT_1001051a0,PTR___sSSSEsWP_1000f0300,PTR___sSayxGSEsSERzlMc_1000f0370);
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
            (&local_58,&local_59,puVar3,puVar4,puVar5);
  if (unaff_x21 == 0) {
    local_58._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF
              (*(undefined1 *)(unaff_x20 + 1),&local_58,puVar3);
    local_58._0_1_ = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_58,puVar3)
    ;
    local_58._0_1_ = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[4],unaff_x20[5],&local_58,puVar3);
    local_58._0_1_ = 4;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[6],unaff_x20[7],&local_58,puVar3);
    local_58 = CONCAT71(local_58._1_7_,5);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[8],unaff_x20[9],&local_58,puVar3);
    local_58 = unaff_x20[10];
    local_59 = 6;
    puVar4 = &DAT_1001051a8;
    FUN_10000eb08(&DAT_1001051a8,&BYTE_1000d6e50);
    puVar5 = puVar4;
    FUN_1000bbd74();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_58,&local_59,puVar3,puVar4,puVar5);
    local_58 = unaff_x20[0xb];
    local_59 = 7;
    puVar4 = &DAT_1001051b8;
    FUN_10000eb08(&DAT_1001051b8,&BYTE_1000d6e58);
    puVar5 = puVar4;
    FUN_1000bbde4();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_58,&local_59,puVar3,puVar4,puVar5);
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  return;
}

