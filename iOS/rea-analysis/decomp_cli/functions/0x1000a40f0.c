// rea decompile_all
// name: FUN_1000a40f0
// address: 0x1000a40f0
// body: available
// range: 0x1000a40f0-0x1000a430f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000a4250) */
/* WARNING: Removing unreachable block (ram,0x0001000a4210) */
/* WARNING: Removing unreachable block (ram,0x0001000a426c) */

void FUN_1000a40f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined8 *local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar4 = &DAT_100104cf0;
  puVar9 = &DAT_1000d6848;
  local_78 = param_1;
  FUN_10000eb08(&DAT_100104cf0,&DAT_1000d6848);
  lVar11 = *(long *)(puVar4 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  FUN_1000a2ee0(0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_1000a4310();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -(lVar10 + 0xfU & 0xfffffffffffffff0),&DAT_1000fafc0,&DAT_1000fafc0,lVar5,
             uVar1,uVar2);
  puVar3 = local_78;
  if (unaff_x21 == 0) {
    puVar6 = &DAT_100103ed8;
    FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
    local_61 = 0;
    puVar7 = puVar6;
    FUN_1000a4350();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar6,&local_61,puVar4,puVar6,puVar7);
    local_62 = 1;
    puVar8 = &local_62;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar8,puVar4);
    FUN_10002c9fc(FUN_100096178,puVar9,1);
    (**(code **)(lVar11 + 8))(auStack_80 + -(lVar10 + 0xfU & 0xfffffffffffffff0),puVar4);
    local_68 = 0;
    local_70 = 0;
    FUN_100001428(param_2);
    *puVar3 = local_58;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = local_68;
    puVar3[3] = (ulong)puVar8 & 1;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = local_70;
    puVar3[6] = PTR___swiftEmptyArrayStorage_1000f0740;
    *(undefined1 *)(puVar3 + 7) = 0;
  }
  else {
    FUN_10002c9fc(FUN_100096178,puVar9,1);
    FUN_100001428(param_2);
  }
  return;
}

