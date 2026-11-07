// rea decompile_all
// name: FUN_1000b2030
// address: 0x1000b2030
// body: available
// range: 0x1000b2030-0x1000b23d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b2330 to 0x1000b25cc FUN_1000b25cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000b21b4) */

void FUN_1000b2030(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar2 = 0;
  FUN_1000b35b4();
  if ((uVar2 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000b2490,0,0xd000000000000099,0x8000000100881de0,0xd000000000000017,
                  0x8000000100882710,0xef,0);
  }
  else {
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar1 = *(long *)(unaff_x22 + 0xf8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0xe0);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(uVar8);
    FUN_10009ff0c();
    puVar5 = PTR___sSSN_1009957f8;
    uVar7 = 0;
    uVar3 = uVar8;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (uVar8,0,PTR___sSSN_1009957f8,uVar2);
    *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
    *(ulong *)(unaff_x22 + 0x110) = uVar7;
    (**(code **)(lVar1 + 8))(uVar8,uVar9);
    if (uVar7 >> 0x3c < 0xf) {
      FUN_100008184(uVar3,uVar7);
      FUN_10067eda8(unaff_x22 + 0x90,uVar3,uVar7,0);
      puVar4 = &DAT_100a76d38;
      FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined **)(puVar4 + 0x38) = puVar5;
      *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_1009e61c8;
      *(undefined8 *)(puVar4 + 0x20) = 0x79656b;
      *(undefined8 *)(puVar4 + 0x28) = 0xe300000000000000;
      thunk_FUN_10068573c(unaff_x22 + 0x58);
      _swift_setDeallocating(puVar4);
      uVar8 = *(undefined8 *)(puVar4 + 0x10);
      puVar5 = &DAT_100a76d40;
      FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
      _swift_arrayDestroy(puVar4 + 0x20,uVar8,puVar5);
      if (*(char *)(unaff_x22 + 0x89) == '\x01') {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
        *(undefined8 *)(unaff_x22 + 0x118) = uVar3;
        _swift_bridgeObjectRetain(uVar3);
        FUN_1000abcec(unaff_x22 + 0x58);
        plVar6 = (long *)0x20;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x120) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1000b23d4;
        FUN_1000b25cc(uVar8,uVar3);
        return;
      }
      FUN_1000abcec(unaff_x22 + 0x58);
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_1000b24e8,0,0xd000000000000099,0x8000000100881de0,0xd000000000000017,
                    0x8000000100882710,0xfb,0);
      FUN_1000abcec(unaff_x22 + 0x90);
      FUN_100006cc8(uVar3,uVar7);
    }
    else {
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_1000b24bc,0,0xd000000000000099,0x8000000100881de0,0xd000000000000017,
                    0x8000000100882710,0xf4,0);
    }
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x0001000b23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(4);
  return;
}

