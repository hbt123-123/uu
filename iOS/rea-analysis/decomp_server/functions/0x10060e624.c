// rea decompile_all
// name: FUN_10060e624
// address: 0x10060e624
// body: available
// range: 0x10060e624-0x10060e7f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060e624(undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(param_4 + -8);
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_90 + -uVar3;
  lVar6 = (long)puVar7 - uVar3;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    __s7Combine14AnyCancellableC6cancelyyF();
    _swift_release(lVar4);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  _swift_release(uVar1);
  lVar4 = 0;
  __s7Combine11SubscribersO10CompletionOMa(0,param_4,param_5);
  lVar5 = lVar6 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(lVar5,param_1,lVar4);
  lVar4 = lVar5;
  (**(code **)(lVar8 + 0x30))(lVar5,1,param_4);
  if ((int)lVar4 != 1) {
    pcVar9 = *(code **)(lVar8 + 0x20);
    (*pcVar9)(lVar6,lVar5,param_4);
    (**(code **)(lVar8 + 0x10))(puVar7,lVar6,param_4);
    puVar2 = puVar7;
    __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(puVar7,param_4,param_5);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = param_4;
      _swift_allocError(param_4,param_5,0,0);
      (*pcVar9)(param_5,puVar7,param_4);
    }
    else {
      (**(code **)(lVar8 + 8))(puVar7,param_4);
    }
    FUN_100616260(puVar2);
    _swift_errorRelease(puVar2);
    (**(code **)(lVar8 + 8))(lVar6,param_4);
  }
  return;
}

