// rea decompile_all
// name: FUN_1003f5438
// address: 0x1003f5438
// body: available
// range: 0x1003f5438-0x1003f56ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f566c) */
/* WARNING: Removing unreachable block (ram,0x0001003f5640) */
/* WARNING: Removing unreachable block (ram,0x0001003f55bc) */
/* WARNING: Removing unreachable block (ram,0x0001003f5538) */
/* WARNING: Removing unreachable block (ram,0x0001003f5578) */
/* WARNING: Removing unreachable block (ram,0x0001003f55fc) */
/* WARNING: Removing unreachable block (ram,0x0001003f5658) */
/* WARNING: Removing unreachable block (ram,0x0001003f5680) */
/* WARNING: Removing unreachable block (ram,0x0001003f568c) */
/* WARNING: Removing unreachable block (ram,0x0001003f5670) */
/* WARNING: Removing unreachable block (ram,0x0001003f567c) */
/* WARNING: Removing unreachable block (ram,0x0001003f5690) */
/* WARNING: Removing unreachable block (ram,0x0001003f5694) */
/* WARNING: Removing unreachable block (ram,0x0001003f5500) */

void FUN_1003f5438(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8d7d0;
  FUN_100004bb4(&DAT_100a8d7d0,&DAT_100823c28);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1003f53ac();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_1009bbd20,&DAT_1009bbd20,lVar4,uVar1,uVar2
            );
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *(undefined1 **)(unaff_x20 + 0x10) = puVar5;
    *(undefined **)(unaff_x20 + 0x18) = puVar6;
    local_52 = 1;
    puVar5 = &local_52;
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *(undefined1 **)(unaff_x20 + 0x20) = puVar5;
    *(undefined **)(unaff_x20 + 0x28) = puVar6;
    local_53 = 2;
    puVar5 = &local_53;
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *(undefined1 **)(unaff_x20 + 0x30) = puVar5;
    *(undefined **)(unaff_x20 + 0x38) = puVar6;
    local_54 = 3;
    puVar5 = &local_54;
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *(undefined1 **)(unaff_x20 + 0x40) = puVar5;
    *(undefined **)(unaff_x20 + 0x48) = puVar6;
    local_55 = 4;
    puVar5 = &local_55;
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *(undefined1 **)(unaff_x20 + 0x50) = puVar5;
    *(undefined **)(unaff_x20 + 0x58) = puVar6;
    local_56 = 5;
    puVar5 = &local_56;
    puVar6 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar7 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
    *(undefined1 **)(unaff_x20 + 0x60) = puVar5;
    *(undefined **)(unaff_x20 + 0x68) = puVar6;
  }
  else {
    FUN_1003f5700();
    _swift_deallocPartialClassInstance();
  }
  FUN_10003f094(param_1);
  return;
}

