// rea decompile_all
// name: FUN_1000ae028
// address: 0x1000ae028
// body: available
// range: 0x1000ae028-0x1000ae203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000ae108) */
/* WARNING: Removing unreachable block (ram,0x0001000ae194) */
/* WARNING: Removing unreachable block (ram,0x0001000ae150) */

void FUN_1000ae028(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100a76c18;
  FUN_100004bb4(&DAT_100a76c18,&DAT_10080b788);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar6);
  FUN_1000ae904();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_10099a748,&DAT_10099a748,lVar3,uVar6,uVar1
            );
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar4 = &local_51;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined1 **)(unaff_x20 + 0x10) = puVar4;
    *(undefined **)(unaff_x20 + 0x18) = puVar5;
    _swift_bridgeObjectRelease(uVar6);
    local_52 = 1;
    puVar4 = &local_52;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined1 **)(unaff_x20 + 0x20) = puVar4;
    *(undefined **)(unaff_x20 + 0x28) = puVar5;
    _swift_bridgeObjectRelease(uVar6);
    local_53 = 2;
    puVar4 = &local_53;
    puVar5 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar7 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined1 **)(unaff_x20 + 0x30) = puVar4;
    *(undefined **)(unaff_x20 + 0x38) = puVar5;
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    _swift_release();
  }
  FUN_10003f094(param_1);
  return;
}

