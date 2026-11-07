// rea decompile_all
// name: FUN_100349660
// address: 0x100349660
// body: available
// range: 0x100349660-0x100349787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100349660(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = param_2;
  FUN_100349788();
  _swift_allocObject();
  puVar3 = &DAT_100a86ef0;
  FUN_100004bb4(&DAT_100a86ef0,&DAT_10081ae80);
  lVar4 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar3,uVar8 + *(long *)(lVar7 + 0x48),uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  __s10Foundation8URLErrorV4CodeV21networkConnectionLostAEvgZ(puVar3 + uVar8);
  puVar5 = puVar3;
  FUN_100347f1c();
  _swift_setDeallocating(puVar3);
  (**(code **)(lVar7 + 8))(puVar3 + uVar8,lVar4);
  _swift_deallocClassInstance(puVar3,0x20,7);
  if (1 < param_3) {
    *(long *)(lVar2 + 0x10) = param_2;
    *(ulong *)(lVar2 + 0x18) = param_3;
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    puVar3 = PTR___swiftEmptySetSingleton_100995eb0;
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    *(undefined **)(lVar2 + 0x30) = puVar3;
    *(undefined **)(lVar2 + 0x38) = puVar5;
    _swift_bridgeObjectRetain(param_4);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100349788);
  (*pcVar1)();
}

