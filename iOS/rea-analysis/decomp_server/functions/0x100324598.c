// rea decompile_all
// name: FUN_100324598
// address: 0x100324598
// body: available
// range: 0x100324598-0x1003247f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100324688 to 0x1007dcc94 _$ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003247f0 to 0x1007df160 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100324598(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar2 = 0x20;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(lVar2 + 0x10) = uVar12;
  uVar3 = 0xf;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalFTu_100996090
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar4;
    puVar5 = &DAT_100a838e0;
    FUN_100004bb4(&DAT_100a838e0,&DAT_100817e08);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)thunk_FUN_1003224ac;
    __ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalF
              (*(undefined8 *)(unaff_x22 + 0x50),0,0,0xd000000000000032,0x80000001008aa990,
               FUN_10032d12c,lVar2,puVar5);
    return;
  }
  pcVar1 = *(code **)(unaff_x22 + 0x58);
  puVar5 = &DAT_100a838e0;
  FUN_100004bb4(&DAT_100a838e0,&DAT_100817e08);
  uVar3 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1003247f4;
  lVar2 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar2,0);
  puVar6 = &DAT_100a86010;
  FUN_100004bb4(&DAT_100a86010,&DAT_10081a720);
  lVar10 = *(long *)(puVar6 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  uVar3 = lVar11 + 0xf;
  uVar7 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  __sScC12continuation8functionScCyxq_GSccyxq_G_SStcfC
            (uVar7,lVar2,0xd000000000000032,0x80000001008aa990,puVar5,PTR___ss5NeverON_100995d08,
             PTR___ss5NeverOs5ErrorsWP_100995d10);
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  (**(code **)(lVar10 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009b1e90;
  _swift_allocObject(&DAT_1009b1e90,uVar9 + lVar11,uVar8 | 7);
  (**(code **)(lVar10 + 0x20))(puVar5 + uVar9,uVar3,puVar6);
  (*pcVar1)(FUN_10032d178,puVar5);
  _swift_release(puVar5);
  _swift_task_dealloc(uVar3);
  (**(code **)(lVar10 + 8))(uVar7,puVar6);
  _swift_task_dealloc(uVar7);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

