// rea decompile_all
// name: FUN_10032833c
// address: 0x10032833c
// body: available
// range: 0x10032833c-0x100328587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10032841c to 0x1007dd078 _$ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100328584 to 0x1007df160 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032833c(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  lVar2 = 0x20;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  auVar13 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x50),
                     *(undefined1 (*) [16])(unaff_x22 + 0x50),8,1);
  *(long *)(lVar2 + 0x18) = auVar13._8_8_;
  *(long *)(lVar2 + 0x10) = auVar13._0_8_;
  uVar3 = 0xf;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlFTu_1009960a0
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100328588;
    __ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF()
    ;
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x58);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100328600;
  lVar2 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar2,1);
  puVar5 = &DAT_100a85d18;
  FUN_100004bb4(&DAT_100a85d18,&DAT_10081a3c8);
  lVar11 = *(long *)(puVar5 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  uVar3 = lVar10 + 0xf;
  uVar6 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  puVar7 = &DAT_100a82488;
  FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
  __sScC12continuation8functionScCyxq_GSccyxq_G_SStcfC
            (uVar6,lVar2,0x293a5f28646e6573,0xe800000000000000,PTR___sytN_100995e90 + 8,puVar7,
             PTR___ss5ErrorWS_100995c48);
  lVar8 = lVar8 + _TtC9Alamofire7Request::id;
  FUN_10032af40(lVar8);
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  (**(code **)(lVar11 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &DAT_1009b1778;
  _swift_allocObject(&DAT_1009b1778,uVar12 + lVar10,uVar9 | 7);
  (**(code **)(lVar11 + 0x20))(puVar7 + uVar12,uVar3,puVar5);
  FUN_1002ff368(uVar1,lVar8,thunk_FUN_10032c528,puVar7);
  _swift_release(puVar7);
  (**(code **)(lVar11 + 8))(uVar6,puVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

